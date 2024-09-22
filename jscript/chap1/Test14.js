const SCRIPTS = [
    {
      name: "Coptic",
      ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
      direction: "ltr",
      year: -200,
      living: false,
      link: "https://en.wikipedia.org/wiki/Coptic_alphabet"
    },
    {
      name: "Cyrillic",
      ranges: [[1024, 1280], [1280, 1328]],
      direction: "ltr",
      year: 900,
      living: true,
      link: "https://en.wikipedia.org/wiki/Cyrillic_script"
    },
    {
      name: "Han",
      ranges: [[11904, 12032], [12032, 12246], [12293, 12294], [12321, 12330]],
      direction: "rtl",
      year: -1100,
      living: true,
      link: "https://en.wikipedia.org/wiki/Han_unification"
    },
    {
      name: "Latin",
      ranges: [[65, 91], [97, 123], [160, 256]],
      direction: "ltr",
      year: -700,
      living: true,
      link: "https://en.wikipedia.org/wiki/Latin_script"
    }
    // Add more scripts as needed
  ];
  
  function whichScript(code) {
    for (const script of SCRIPTS) {
      if (script.ranges.some(arr => code >= arr[0] && code < arr[1])) {
        return script;
      }
    }
    return null;
  }
  
  function countby(items, group) {
    let counter = [];
    for (const item of items) {
      let found = group(item);
      if (found === null) continue;
      let known = counter.findIndex(c => c.name === found.name);
      if (known == -1) {
        counter.push({ name: found.name, direction: found.direction, count: 1 });
      } else {
        counter[known].count++;
      }
    }
    return counter;
  }
  
  function Dominant(text) {
    let scripts = countby(text, char => whichScript(char.charCodeAt(0)));
    let total = scripts.reduce((n, { count }) => n + count, 0);
    if (total === 0) return "No dominant script found";
    return scripts.map(({ direction, count }) => `${direction}: ${Math.round(count * 100 / total)}%`).join(", ");
  }
  
  
  console.log(Dominant('Hello, 世界 Привет мир Αλφάβητο こんにちは 👋🌍')); 
  
  
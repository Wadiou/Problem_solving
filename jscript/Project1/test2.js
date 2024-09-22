import ordinal from "ordinal"; // Import the ordinal module
import dateNames from 'date-names'; // Import the CommonJS module as a default import
const { days, months } = dateNames;
console.log("hello");
export  function formatdate(date,format)
{
    return format.replace(/YYYY|M(MMM)?|Do?|dddd/g, tag => {
        if (tag == "YYYY") return date.getFullYear();
        if (tag == "M") return date.getMonth() + 1;
        if (tag == "MMMM") return months[date.getMonth()];
        if (tag == "D") return date.getDate();
        if (tag == "Do") return ordinal(date.getDate());
        if (tag == "dddd") return days[date.getDay()];
      });
}

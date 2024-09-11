/*class GroupIterator {
    constructor(group) {
      this.index = 0;
      this.group = group;
    }
  
    next() {
      if (this.index >= this.group.members.length) return { done: true };
      let value = { value: this.group.members[this.index], done: false };
      this.index++;
      return value;
    }
  }*/
  
  class Group {
    constructor() {
      this.members = [];
      this[Symbol.iterator] = function*() {
        for (let i = 0; i < this.members.length; i++) {
          yield this.members[i];
        }
      };
    }
  
    add(value) {
      if (!this.has(value)) {
        this.members.push(value);
      }
    }
  
    delete(value) {
      this.members = this.members.filter(member => member !== value);
    }
  
    has(value) {
      return this.members.includes(value);
    }
  
    static from(iterable) {
      let group = new Group();
      for (let item of iterable) {
        group.add(item);
      }
      return group;
    }
  
    
  }
  
  // Example usage:
  let group = Group.from([10, 20, 30, 40]);
  
  for (let value of group) {
    console.log(value);
  }

  
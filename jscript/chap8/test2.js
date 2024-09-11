class Alaoui extends Error
{
    constructor(message)
    {
        super(message);
        this.name = this.constructor.name;
    }
}
throw new Alaoui("7abib 9albi");



    
    

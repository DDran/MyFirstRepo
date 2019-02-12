function LList() {
    this.head = new Node('头部');
    console.log("this.head.element",this.head.element);
    this.find = find;
    //console.log(this.find);
    //this.insert = insert;
    //this.remove = remove;
    //this.display = display;
}

function Node(element) {
    this.element = element;
    console.log("this.element",this.element);
    //this.next = null;
}

function find(){
    var ifo = this.head.element;
    console.log("find方法中的ifo哈哈哈",ifo);
    return ifo;
}

var a =new LList();
a.find();

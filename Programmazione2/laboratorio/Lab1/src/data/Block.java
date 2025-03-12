//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package data;

public class Block {
    private char content;

    public Block() {
        this.content = '.';
    }

    public Block(char content) {
        this.content = content;
    }

    public char display() {
        return this.content;
    }

    public void setContent(char content) {
        this.content = content;
    }
}

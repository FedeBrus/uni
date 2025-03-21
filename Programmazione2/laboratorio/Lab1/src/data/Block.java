//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package data;

public class Block {
    private char content;
    private boolean fallsWithGravity;
    private boolean fallsThrough;

    public Block() {
        this.content = '.';
        this.fallsWithGravity = false;
        this.fallsThrough = true;
    }

    public Block(char content, boolean fallsWithGravity, boolean fallsThrough) {
        this.fallsWithGravity = fallsWithGravity;
        this.fallsThrough = fallsThrough;
        this.content = content;
    }

    public char display() {
        return this.content;
    }

    public void setContent(char content) {
        this.content = content;
    }

    public boolean isFallsWithGravity() {
        return fallsWithGravity;
    }

    public void setFallsWithGravity(boolean fallsWithGravity) {
        this.fallsWithGravity = fallsWithGravity;
    }

    public boolean isFallsThrough() {
        return fallsThrough;
    }

    public void setFallsThrough(boolean fallsThrough) {
        this.fallsThrough = fallsThrough;
    }
}

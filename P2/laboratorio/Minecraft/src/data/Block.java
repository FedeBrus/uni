package data;

public interface Block extends InventoryBlock {
    char display();
    boolean isFallsWithGravity();
    boolean isFallsThrough();
    boolean isPickable();
}

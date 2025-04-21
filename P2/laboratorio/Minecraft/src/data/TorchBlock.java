package data;

public class TorchBlock extends AbstractSolidBlock {
    public TorchBlock() {
        super("TorchBlock", 'T');
    }

    @Override
    public int blockId() {
        return 7;
    }
}

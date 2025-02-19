#include <genesis.h>
#include <resources.h>

int main()
{
    u16 ind = TILE_USER_INDEX;
    PAL_setPalette(PAL0, bg1.palette->data, DMA);
    VDP_drawImageEx(BG_B, &bg1, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += bg1.tileset->numTile;
    PAL_setPalette(PAL1, fg1.palette->data, DMA);
    VDP_drawImageEx(BG_A, &fg1, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    //TILE_ATTR_FULL()
    VDP_drawText("I love the little tacos,", 2,4);
    VDP_drawText("I love them good.", 2,6);
    while(1)
    {
        SYS_doVBlankProcess();
    }
    return (0);
}

inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����յ�");
        set ("long", @LONG
�ߵ������Ȼ����һ��é�ݣ�����é�ݵ��������⿴��������
�ɲ������ƺ��Ѿ�������ס�ˣ��յ����Ӳݴ��������Կ�����������
һ�������߹���С��ͨ����������⻹��һ��ʯͷ (stone)����ͷ
�ƺ����̻���һЩͼ�����������߽�һ��������
LONG);
        set("item_desc", ([ /* sizeof() == 1 */
        "stone" : "
          "HIR"��Ը�˳���                                   "NOR+YEL"��
            "HIR"ǧ�ﹲ濾�                               "NOR+YEL"��    "HIY"��
"HIB"�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x
�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z�z
"NOR+BLU"�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{�{\n"NOR,
]));

        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "enter" : __DIR__"mon01",
        "west" : __DIR__"mon03",
]));
        setup();
}


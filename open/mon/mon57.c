inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ԭ");
        set ("long", @LONG
������һƬ�����͵Ĳ�ԭ�����治�����ţ�����ô�ߵĳ���ɽ��
��Ȼ������˵�һƬ��ԭ������ԭ����һ�����ӣ����ǳ�ˮ��������
�ģ��Ѿ��ɺ���һ���ݣ����ɺԵĲ���ȴ������һƬ���̵Ĳ�ԭ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"      : "/open/ghost-hole/g-h01",
        "west"      : __DIR__"mon56",
]));
        setup();
}

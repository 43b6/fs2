#include </open/open.h>
#include <room.h>


inherit ROOM;

void create()
{
        set("short", "С���");
        set("long", @LONG
С�������������·��һ�¸�ǽ��ס�����ϵĳ�·�����˴��򡡡�����
�ǳ���Ź�Ũ�ҵ���ˮζ����������Ե�ס�����ɴ�����ֱ�ӽ���
ˮ�����˴�֮�ʰɡ����谵�У��ƺ��и��˺����ڵأ�Ҳ��֪����
�ǻ

LONG
        );
        set("outdoors",1);

        set("exits", ([ /* sizeof() == 1 */
                "north" : __DIR__"tide1",
        ]) );

        set("objects",([
            BAD_NPC"drinker" : 1,
        ]));

        setup();
}

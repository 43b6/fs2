//open/prayer/room/westarea/road33.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	ʥ����ϱ���Ŀ��ٵ�·, ���߿���ͨ��ʥ��̵���̳. �ϱ�
	������ԭ���ֵĵ�·. ��ԭ����������Ψһ������·��ֻ����
	��[ ���E���� ]!!��һ������Ƴʰ�����, ��һ��������ͨ��
	, ��������İ峵��, �������������Ľ�ͨ������ͨ���ް�!!
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"road29",		//�ֵ�
	"south":__DIR__"road37",		//�ֵ�
	 
        ]) );
          set("objects", ([ /* sizeof() == 1 */
          "/open/prayer/npc/vendor" : 1,
]));

        setup();
}

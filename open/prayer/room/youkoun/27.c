//open/prayer/room/youkoun/27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�̷�");
        set("long",@LONG

        ԭ���������������˽����̷�!!���������Ĵ��ž�Ȼ
        �����!!��������ʹ������, ���Բ�ɱ����Ϊ��??�����
        �̾߶������, ���кö������δ�������þ���!!��ѽ!!
        ��Ϊ���Ե��˻����Ͽ��ܳ�ȥ??

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"2",     
        "north":__DIR__"26",    
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/chamber" : 2,         //����
                
]));
                
  setup();
}

//open/prayer/room/youkoun/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�ı���������, վ��һλŮ�ܽ�ͷ! ����Ϊ����
        ������һ�ȵı�����, �ϸ��ָ����������ϰ! ����ʱ
        �ظ��������Ķ��� :" ���������úö��ͻȻʱ.. "
        ������������, ��������ֱ�ͨ�����������ܹܷ���.

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"4",             //����
        "south":__DIR__"17",            //���䳡
        "east":__DIR__"9",              //����
        "west":__DIR__"11",             //����
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-officer2" : 1,                //�ܽ�ͷ
                
]));
        
          setup();
}

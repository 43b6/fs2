//open/prayer/room/youkoun/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        һ�����ܹܵ��鷿, ����һ�������Ͷ�������! �ƺ��ڷ�
        ��������. ��������, ��ʵҲû��ʲô��ֵ�������µ�,
        ���������!

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"12",            //�ܹܷ�
        "south":__DIR__"14",            //�ܹܷ�
        "east":__DIR__"11",             //�ܹܷ�
        "west":__DIR__"15",             //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon2" : 1,                //����
                
]));
     
  setup();
}

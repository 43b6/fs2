//open/prayer/room/youkoun/24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܵ�");
        set("long",@LONG

        �ܵ�������������Ѿ���ڵ�Ѫ��, ��һ����ֵĳ�ζӦ
        �þ���Ѫ��ζ��, �ܵ��ڵĵƹ�ȸղ�����һ��!!��~~��
        �϶���һЩ֫��Ĳк�, �������������ֹ���Ź�!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"25",     
        "south":__DIR__"23",    
 
        ]) );
        set("no_fight", 0);
                
  setup();
}

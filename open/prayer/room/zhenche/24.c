//open/prayer/room/zhenche/24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        ��Ϊ�ܹܲ�ϲ�����Խ��������鷿, ��������ѡ�ı���Ҳ
        ����Ů��. �����ɱ�С�������! �����������һ��Ҳ��
        ��������!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"28",        //�ܹܷ�
        "east":__DIR__"23",             //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/paltoon1" : 1,              //����
  "/open/prayer/npc/paltoon2" : 1,              //����
                
]));
     
  setup();
}

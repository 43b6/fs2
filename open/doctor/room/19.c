#include <room.h>
inherit ROOM;
void create()
{
        set("short", "ľ�˳�");
        set("long", @LONG

    ������˺ü���ľ�ˣ�ľ�����滭��������������ź�Ѩ����ѧ
��ĵ���÷���������������Щľ������Ħʵ�壬������������֧��
���ǒz���z�ģ���Ȼ���ӿ������е��󣬲����������ɣ�������ҽʱ
����׼ȷ���ϳ�����Ѩλ��

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"15",         
        "south":__DIR__"25",        
        "west":__DIR__"20",       

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,             
  "/open/doctor/npc/trainee2" : 1,       

]));

  setup();
}



#include <room.h>
inherit ROOM;
string search();
void create()
{
        set("short", "ҩ��");
        set("long", @LONG

    �����������ҩ�񣬴˴����������Ŵ�ҩ�ĵط�������Ҳ������
������������ץҩ����Ϊ������Щϡ�������Ĳ�ҩ������ͨ��������
ҩͯ�ڴ˿��أ�û����ñ�����⣬���ⱻ���Ϊ����

LONG
        );
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"3",            
        "south":__DIR__"9",          
        "east":__DIR__"5",          
        ]) );
        set("light_up", 1);
         set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/mdguard.c" : 1,
]));

   setup();
 set("search_desc", ([ /* sizeof() == 1 */
  "ҩ��" : (: search :),
]));
  setup();
}


string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N��ҩ����������ȥ , ������һ�������鲢�ս��ڴ��� \n",this_player() );
   this_player()->set_temp("quests/findball5",1);
   new("/open/gsword/obj1/soilball")->move(this_player());
   return "";
  }
        message_vision("$N���ⷭ����ȥ , ���ʲôҲû���� \n",this_player());
        return "";
}

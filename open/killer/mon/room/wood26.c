//written by acelan...../u/a/acelan/room/wood26.c
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�ұ�");
        set("long", @LONG
�ƺ��Ѿ��ߵ�ɭ�ֵľ�ͷ��, ��ǰ��һ��Ƭ��ͺͺ���ұ�(wall)
, �����Ѿ�û�а취�ټ���ǰ���ˡ�΢���������ɺ󷽵�ɭ�ִ����
��, ���ܵ�ɱ���ƺ����������, ��ȴ�ֶ��˼��ֹ�������ɱ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood19.c",
   ]));

        set("no_clean_up", 0);
        set("item_desc", ([ /* sizeof() == 1 */
            "wall" : "���⻬���ұ�, �����м��ߵ��Ṧ, ���������ʵǡ�\n",
        ]));
        set("search_desc", ([ /* sizeof() == 1 */
            "wall" : "�ұ����ƺ�����Щ���ӡ, ��������ǰ�����������˵ء�\n�ⲻ��������Ҫ�����Ṧ(moveup), ��ȥһ̽������\n",
        ]));
        setup();
}
void init()
{
   add_action("do_moveup", "moveup");
}
int do_moveup( string arg)
{
   object user;
   user= this_player();
   if( user->query("quest/rain")==1)
   {
      tell_object( user, HIW"����һ��, �����Ṧ, �ɿ�����Ҷ���ȥ....\n"NOR);
      user->move("/open/killer/mon/room/wood30.c");
   }
   else
   {
      tell_object( user, HIW"����һ��, �����Ṧ, �ɿ�����Ҷ���ȥ....\n"NOR);
      tell_object( user, HIR"ͻȻ������һ����˳��, ��һ��, �����ͳ�������׹ȥ...\n"NOR);
      tell_object( user, HIB"������������򲢲������ʵ���Ƭ�ұ�...\n"NOR);
   }
   return 1;
}

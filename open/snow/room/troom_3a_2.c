// Room: /u/e/eiei/room/troom_3a_2.c
inherit ROOM;

string search();
void create ()
{
  set ("short", "������ʯ·");
  set ("long", @LONG
    �ߵ���������ƺ���ð���ˡ������������ϸ��
    �Ļ�����·��һ�Ժ�����һ����ʯ���̳ɵĵ�С·����
    Ȼ��������ʯ���Ѿ��е��Ͼɣ�����������ʯ��һֱ��
    �����������죬���Կ��������Ե���һ��ͻ���ˡ�
LONG);

  set("outdoors", "/u/e/eiei/room");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"troom_3a_1.c",
]));

 set("search_desc", ([ /* sizeof() == 1 */
  "��ʯ��" : (: search :),
]));
setup();
}
string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N����ʯ����������ȥ , ������һ��ˮ���鲢�ս��ڴ��� \n",this_player() );
   this_player()->set_temp("quests/findball3",1);
   new("/open/gsword/obj1/waterball")->move(this_player());
   return "";
  }
        message_vision("$N���ⷭ����ȥ , ���ʲôҲû���� \n",this_player());
        return "";
}

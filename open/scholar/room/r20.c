// /u/j/judd/room/r20.c
inherit ROOM;
string search();

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���������ŵ����ô��������Թ����˸�ʽ�����ıʣ�ǽ�����м�
��ɽˮ������˸����⣬�����г����ŵ����գ���Ҳ��˿���������
ͨ���δ���ֻ֪��ǰ������ʥ�����ס����
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"in.c",
  "north" : __DIR__"r17.c",
  "west" : __DIR__"w1.c",
  "east" : __DIR__"e1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/obj/bamboo_pen" : 2,
]));
  set("light_up", 1);

 set("search_desc", ([ /* sizeof() == 1 */
  "ɽˮ��" : (: search :),
]));
 setup();
}
string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N��ɽˮ����������ȥ , ������һ��ľ���鲢�ս��ڴ��� \n",this_player() );
   this_player()->set_temp("quests/findball4",1);
   new("/open/gsword/obj1/woodball")->move(this_player());
   return "";
  }
        message_vision("$N���ⷭ����ȥ , ���ʲôҲû���� \n",this_player());
        return "";
}

// Room: /open/wu/room/luroom9.c
// ��ɽ��ݵ����䳡
inherit ROOM;
string search();
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ�����䳡�ص���ͥ,һ���ɻ���ʯ���̳ɵĵ�·����ɽ�ɵ�
������ȥ,����ֱ�еĻ���ͨ����ɽ�ɵĴ���,���Ȼ��������ʯ����
���Ľź�,�����ڴ�����ĵ�������ѧ�̶��Ծ�����¯����ĵز�
�ˡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"luroom8",
  "west" : __DIR__"luroom6",
  "south" : __DIR__"luroom10",
  "east" : __DIR__"luroom17",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/e_trainee" : 2,
]));

 set("search_desc", ([ /* sizeof() == 1 */
  "����ʯ" : (: search :),
]));
  setup();
}
string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N�ڻ���ʯ��������ȥ , ������һ�Ż��鲢�ս��ڴ��� \n",this_player() );
   this_player()->set_temp("quests/findball2",1);
   new("/open/gsword/obj1/fireball")->move(this_player());
   return "";
  }
        message_vision("$N���ⷭ����ȥ , ���ʲôҲû���� \n",this_player());
        return "";
}

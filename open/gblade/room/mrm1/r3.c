// Room: /u/m/moner/tree/room19.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

��������а���������˵��η������۴�ϸ��������һ�Զ���ɭ����
��������ɱ����������㣬��ÿ̤��һ��������㺮���ķ�ë�ţ�������
��û�а�������������һƬ������������Խ���¡��η��������ػص��߶�
�����䡣

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":"/open/gblade/room/room22.c",
]));
  set("light_up", 1);
set("no_transmit", 1);
  setup();
}
void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object        me=this_player();
      int    query;
message_vision("$N������ȥ���ڷ���һ�����µ�·��\n", me);
set("exits/down","/open/gblade/room/mrm1/r4.c");
  return 1;
}

int valid_leave(object me, string dir)
{
if(dir =="down")
    this_object()->delete("exits/down");
    return 1;
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;

 }

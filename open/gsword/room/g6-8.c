inherit ROOM;

void create ()
{
  set ("short", "��ɽС��");
  set ("long", @LONG
һ��˳���ͱڱ�Ե�����С����������ߣ��ϱ߼�Ϊ������ȣ���·
���������죬�㿴��·�����˸������� (sign)!

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "������д�� :
�ɽ����� ,������� !
",
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g6-9.c",
  "east" : "/open/gsword/room/g6-4",
]));
  set("objects",([
        "/open/gsword/npc/trainee-5.c":1,
  ]));

  setup();
}
void init()
{
add_action("do_search","search");
add_action("do_jump","jump");
}
int valid_leave(object me, string dir)
{
        if(dir=="west"&&present("down yua",environment(me)))
return notify_fail("�ŵ��µ�������ǰ ,˵��:������ä�� ?�����������!\n");
        return ::valid_leave(me,dir);
}
int do_search(string str)
{
  if (this_player()->query("fyan")!=8 || str!="���") return 0;
  tell_object(this_player(),"����д���������...ʹ���̲�ס��������ȥ\n");
  this_player()->set("fyan",9);
  return 1;
}
int do_jump(string str)
{
 if (this_player()->query("fyan") !=9 || str!="���") return 0;
 tell_object(this_player(),"�������һԾ.��������Ṧ����������ĺ�..��ֱ׹ɽ����");
 this_player()->receive_wound("kee",4500);
 tell_object(this_player(),"��ľ��������������������޷�ֻ��������֮��.....");
 this_player()->set("force",0);
this_player()->move("/open/gsword/room1/yan1.c");
return 1;
}

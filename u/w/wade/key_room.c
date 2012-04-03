// Room: /u/w/wade/workroom.c

inherit ROOM;

void create()
{
  set("short", "��������Ĺ�����");
  set("long", @LONG



                 ��������Ĺ�����




LONG);

  set("exits", ([ /* sizeof() == 4 */
      "down" : "/open/wiz/entrance",
      "west" : __DIR__"workroom",
  ]));

  set("no_clean_up", 0);
  set("valid_startroom", 1);
  set("objects", ([
  // __DIR__"npc/test"	:	1,
  ]) );

  // Ҳ������� set ("need_key/door", 1)
  create_door ("east", "С����", "west");
  set ("need_key/east", 1);

  setup();
  call_other("/obj/board/wade_b", "???");
}

void init()
{
  add_action("do_open", "open");
  add_action("do_close","close");
}

int do_close (string str)
{
  close_door   ("east");
  lock_door ("east");
  return 1;
}

int do_open (string str)
{
  unlock_door ("east");
  open_door   ("east");
  return 1;
}

// ÿ�� reborn �ͻ����һ���������
void reset()
{
  ::reset();
}

// Room: /u/w/wade/grapic_room.c
inherit ROOM;

string record, record_file;

void create ()
{
  set ("short", "[1;32mͼ�λ�MUD������[0m");
  set ("long", @LONG
����һ�������÷�չͼ��MUD��С���������ۡ��о��������ĵõķ���
    ����������� record ��¼����Ŀǰֻ¼�� "say" ���
    ��record���ɿ�¼��״������record stop����ֹͣ¼����
    ��record ������ �ɽ��ڱ����������á�say����ѶϢ¼������

[1;32mС���ټ��˼�����:Wade[0m
[1;32mServer��:Wade��Chan��Fir[0m
[1;32mClient��:Lum��[0m
ϣ����һ��һ�����з������ս�FS���ͼ�λ���
LONG);

  set("exits", ([ /* sizeof() == 7 */
  "lum" : "/u/l/lum/workroom.c",
  "anmy" : "/u/a/anmy/workroom.c",
  "fir" : "/u/f/fir/workroom.c",
  "wade" : __DIR__"workroom.c",
  "chan" : "/u/c/chan/workroom.c",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  record = "ֹͣ¼����";
  record_file = "";

  setup();
  call_other("/obj/board/gfs_b.c","???");
}

void init ()
{
  add_action ("record", "record");
  add_action ("do_say", "say");
}

int record (string arg)
{
  int write_ok;

  if (!wizardp (this_player()))
    return notify_fail (">> ��ʦ�ſ�¼������\n");
  if (!arg) {
    write (">> Ҫ¼���Ļ��������������ӡ���������������\n");
    write (">> ����¼��״���ǣ�"+ record + "\n");
  }
  else if (arg == "stop")
    record = "ֹͣ¼����";
  else {
    arg = resolve_path(this_player()->query("cwd"), arg);
    write_ok = write_file (arg,
	this_player()->query("id")+ " ����¼���ڣ�"+
	(string)ctime (time()) + "\n", 1);
    if (!write_ok)
      return notify_fail (">> ¼��ʧ�ܣ���\n");
    else {
      record_file = arg;
      record = "¼���С�";
    }
  }
  return 1;
}

int do_say (string arg)
{
  if (record == "¼���С�")
    write_file (record_file, this_player()->query("id")+"˵����"+arg+"\n", 0);
  return 0;
}

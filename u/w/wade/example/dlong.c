// Room: /u/w/wade/workroom.c
#include <room.h>

#define TEST "动态使用 long"

inherit ROOM;

string long = 
        "\n\n\n\n" +
	"\t菠萝面包的测试室,\n" +
	"\t专门给他测试时用的\n" +
	"\t要下命令时，这里的命令可以用的有：\n";

void create ()
{
  seteuid (getuid());
  set ("short", TEST);
  set ("long", long);
	

  set("light_up", 1);
  set("exits", ([
        "down"	: __DIR__"startroom",
  ]));

  setup();
}

void init ()
{
  add_action ("look", "look");
}

int look (string arg)
{
  string long_desc;
  mixed *cmds;
  int	i;

  long_desc = long + "\n";
  cmds = this_player()->query_commands();
  for (i=0; i<sizeof (cmds); i++)
    long_desc = long_desc + "\t\t\t" + cmds[i][0] + "\n";
  this_object()->set ("long", long_desc);
  this_player()->do_command ("look");
  return 1;
}

// Room: /u/w/wade/grapic_room.c
inherit ROOM;

void create ()
{
  set ("short", "[1;32mͼ�λ�MUD������[0m");
  set ("long", @LONG
����һ�������÷�չͼ��MUD��С���������ۡ��о��������ĵõķ���
[1;32mС���ټ��˼�����:Wade[0m
[1;32mServer��:Wade��Chan��Fir[0m
[1;32mClient��:Lum��Sieg��Acelan[0m
ϣ����һ��һ�����з������ս�FS���ͼ�λ���
LONG);

  set("exits", ([ /* sizeof() == 7 */
  "lum" : "/u/l/lum/workroom.c",
  "acelan" : "/u/a/acelan/workroom.c",
  "anmy" : "/u/a/anmy/workroom.c",
  "fir" : "/u/f/fir/workroom.c",
  "sieg" : "/u/s/sieg/workroom.c",
  "wade" : __DIR__"workroom.c",
  "chan" : "/u/c/chan/workroom.c",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
call_other("/obj/board/gfs_b.c","???");
}



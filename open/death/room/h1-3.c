// Room: /open/death/room/h1-3
inherit ROOM;

void create()
{
  set ("short", "第一殿--孽镜台");
  set ("long", @LONG
你走进这里，看到前方不远处有一座高台，台上立着一面闪闪发亮
的大镜子，无数的人正排队登台照孽镜，你看到照完孽镜的人，有的满
脸愧疚，有的充满恐惧，有的面色苍白，有的满面忧愁，大概是因为生
平的罪行完全暴露于孽镜台前，而害怕下地狱吧。
LONG);

  set("light_up", 1);
  set("outdoors", "/open/death");
  setup();
}

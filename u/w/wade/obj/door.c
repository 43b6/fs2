inherit ITEM;

mapping places = ([
	"wade"	:	"/u/w/wade/workroom.c",
]);

void create()
{
        set_name("神奇转换门", ({ "magic door","door" }) );
        set("unit", "把");
        set("long", "一把闪耀着金色光芒的神奇转换门，据说只要心里想着\n"
		    "某个地方, 它就能让你到那边去。\n"
		    "image <where>\n");
}

void init()
{
        add_action ("do_image", "image");
}
int do_image (string arg)
{
  object me;
  string place;

  me = this_player();
  if (!(place = places[arg])) place = resolve_path(me->query("cwd"), arg);
  if( !sscanf(place, "%*s.c") ) place += ".c";
  if (file_size(place) < 0)
    return notify_fail ("神奇转换门传来一阵声音说: 你也太会想像了吧，没这地方啦。\n");
  else
    me->move (place);

  return 1;
}

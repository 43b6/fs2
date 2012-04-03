inherit ITEM;

mapping places = ([
	"wade"	:	"/u/w/wade/workroom.c",
]);

void create()
{
        set_name("����ת����", ({ "magic door","door" }) );
        set("unit", "��");
        set("long", "һ����ҫ�Ž�ɫ��â������ת���ţ���˵ֻҪ��������\n"
		    "ĳ���ط�, ���������㵽�Ǳ�ȥ��\n"
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
    return notify_fail ("����ת���Ŵ���һ������˵: ��Ҳ̫�������˰ɣ�û��ط�����\n");
  else
    me->move (place);

  return 1;
}

inherit ROOM;
void create ()
{
  set ("short", "�������ſ�");
  set ("long", @LONG

����ϸ߸ߵ�����һ��ˮ�������ң����ɷ��д�š���������������ɲ�Ǻÿ���
����͸��ˮ��������������ص�ɫ�ʣ������᲻�ý��۾��ƿ���
����ɫ�Ĵ��Ŵ��ţ��ƺ������š�������ͽ����������ơ�
���Ͽ̻���������ΰ�ķ����������ŷ������죬�����޵еĸо���
���Ե�������������������Ƿ������˲����࿴���ۡ�
����������Щ�������ֵĻ����������˼���У���Ϊ���Ե������ɲ��Ǻ��ǵġ�

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/killer/npc/guard_s.c" : 1,
]));
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"outr0.c",
  "enter" : __DIR__"r17.c",
]));

  setup();
}

 int valid_leave(object me, string dir)
 {
  if(dir=="enter"&&present("guard",environment(me)))
  {
    if(me->query("class")=="dancer")
      return notify_fail("����Ц��˵�����ȥ����������ɲ�������Ŷ\n");
    if(me->query("class")=="blademan")
      return notify_fail("����������˵:��׼��ȥ���ϴ�ȥ���ž�ȻҪɱ��\n");
   }
  return 1;
  }
// Room: /open/wu/room/school17
inherit ROOM;

void create ()
{
  set ("short", "���ƾ�");
  set ("long", @LONG
�߽�����㿴���и�����������ѣ���ȫ������ĵ������㿴���ⷿ��
�������������鼮����һ�Ŵ�Ҳû�У���ϸһ�ƣ��������ǽ�Ƿ���һ��˯��
�õı��ӣ������Ա߻���һ��ҧʣ�İ��ӣ��Լ�һƿ��������ˮ����������ϸ
ע��һ�£���ᷢ��������ܺ���һ�������۵Ĵ�����
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "window" : "    һ��ľ��С��������һ���������ȥ������ͷ��Щʲô��\n",
]));

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school16",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainer2.c" : 1,
]));
  set("light_up", 1);

  setup();
}

void init() {
   add_action("do_jump","jump");
}
int do_jump(string str) {
     if(str != "window"){
        tell_object(this_player(),"��Ҫ���Ķ�����ȥ����\n");
        return 1;}
     else {
        tell_object(this_player(),"�����������һ��������\n");
        this_player()->move(__DIR__"road1");
        return 1;}
}

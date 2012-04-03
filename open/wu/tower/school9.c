// Room: /u/d/devils/school9.c

inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�ξ�");
  set ("long", @LONG
��������������ң�����ʮ�ּ򵥣�ֻ��һ�Ŵ���һЩ�򵥼Ҿ㣬
���Ƶ�����ȴ������������˵������Ϊ�����˳���˯��͵Ϯ����������
�����أ�û�±��Ҵ����������ڷ�����
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "door" : "\n    һ���ܲ����ױ����ֵİ��ţ�������������ƿ�(push)���㲻�ÿ����ƿ���\n",
]));


  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school8",
]));

  set("light_up", 1);
  setup();
}

void init() {
   add_action("do_push","push");
   add_action("do_search","search");

}
int do_push(string str) {
     if(!str){
        return notify_fail("��Ҫ��ʲô��������\n");
        }
      else if(str != "door"){
        tell_object(this_player(),HIR"\n�ݡ����� ӭ���������ѷɵ���\n"NOR);
        tell_object(this_player(),"\n\n����������ƺ��������ˣ���ܴ��ݵؾͶ���ˡ�\n");
        return 1;}
     else {
        tell_object(this_player(),"��ѽ������\n\n��ֻ�������˸��գ����ӱ���ǽ��һ����\n");
        this_player()->move(__DIR__"road1");
        return 1;}
}

int do_search(string str) {
     if(str == "here"){
        tell_object(this_player(),"����ö��ߵ�ǽ��(corner)��Щ��֣��ƺ���ʲô������\n");
        return 1;}
      else if(str != "corner"){
        tell_object(this_player(),"�㵽��Ҫ��ʲô����������\n");
        return 1;}
     else {
        tell_object(this_player(),"�㷢�ֶ��ߵ�ǽ�ƺ����ɶ����ĺۼ�������������һ������(door)��\n");
        return 1;}
}


// Room: /open/wu/room/luroom28.c
// ��ɽ�����Ƶ�����
inherit ROOM;
string do_corner();
void create ()
{
  set ("short", "���ƾ�");
  set ("long", @LONG
�߽�����㿴���и�����������ѣ���ȫ������ĵ������㿴���ⷿ��
�������������鼮����һ�Ŵ�Ҳû�У���ϸһ�ƣ��������ǽ�Ƿ���һ��˯��
�õı��ӣ������Ա߻���һ��ҧʣ�İ��ӣ��Լ�һƿ��������ˮ��
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"luroom27",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/win_jen.c" : 1,
]));

  set("item_desc", ([ /* sizeof() == 1 */
"corner": "ǽ�Ƕ����������µĶ���, һ���Ͳ���ȥ����\n",

  ]));
  set("search_desc",([
  "corner" : (: do_corner :),
  ]));

  set("light_up", 1);
  setup();
}

string do_corner()
{
        
        object me=this_player();
//      if(me->query_temp("thief") == 8)
  if (me->query_temp("get_book") == 0)
{
          write("�������������һ����Щ����......\n\n��..��һ���������ޱ��е��˳���....\n");
          new("/open/wu/obj/haoforce_book")->move("/open/wu/room/luroom28");
          me->set_temp("get_book",1);
          
/*        tell_room(environment(me),"��~~~~~~~~��һ���ҽ�, "+me->query("name")+
          me->move(CAPITAL_ROOM"q0");
          return("�˵�һ��..������˵��ϡ�\n");
*/
        }
        else
           return("�������ϰ��죬���ǿ��������κ�����֮����\n");
}

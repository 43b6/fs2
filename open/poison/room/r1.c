// Room: /u/f/futzao/room/r1
inherit ROOM;
#include <ansi.h>
 
mapping *weapons;
 
string look_shelf();
void add_weapon();
 
void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ħ�̵ı����⣬�������ܵļ���(shelf)�Ϸ����˸�ʽ�����ı�����
�����Ϸŵ�������Ѫ���ޣ������ޣ�ˮ�߳��ޣ����ޣ�Сħ�ޣ� ���ϵ�
������Щ��ϡ����������Щ��ʵ�ã������������һ�����������Կ���
�㿴��ǽ������һ�Ų���(note)��
 
LONG);
 
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"room13.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "note" : "Ҫ��������������������������������( report ���� )��
",
  "shelf" : (: look_shelf :),
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/guard_w.c" : 1,
]));
  set("light_up", 1);
  set("no_clean_up", 1);
 
  setup();
  add_weapon();
}
 
void init()
{
        add_action("do_report", "report");
        add_action("do_take", "take");
        add_action("do_put", "put");
}
 
int do_put(string arg)
{
  object weapon, me = this_player();
  mapping nnew;
   if(!arg) return 0;
  if (sscanf (arg, "%s onto shelf", arg) != 1)
     return 0;
  if(!objectp(weapon = present(arg,me)) || !mapp(weapon->query("weapon_prop")))
	{
		tell_object(me,"�����ϲ�û������������\n");
		return 1;
	}
  if( sizeof(weapons) > 20)
     return notify_fail("�����Ѿ������������ˡ�\n");
  nnew = allocate_mapping(3);
  nnew["name"] = weapon->query("name");
  nnew["id"] = weapon->query("id");
  nnew["file_name"] = base_name(weapon);
  if( !pointerp(weapons) || !sizeof(weapons) )
        weapons = ({ nnew});
  else
        weapons += ({ nnew });
  message_vision(HIC "$N��"+weapon->name()+"�ŵ������ϡ�\n" NOR, me );
  destruct(weapon);
  return 1;
}
 
string look_shelf()
{
        object who = this_player();
        int i;
        if(!sizeof(weapons))
                tell_object(who,"��������Ͽտ���Ҳ��û���κ�������\n");
        else  {
                   write("�����Ϸ��У�\n\n");
                for(i=0 ; i< sizeof(weapons) ; i++ )
                   printf("%20s(%s)\n",weapons[i]["name"],weapons[i]["id"]);
              }
        return " ";
}
 
int do_report(string weapon)
{
        object who = this_player();
        string id;
        int i, index, j=0;
 
        if( !present("guard", this_object()))
              return notify_fail("������û���㻹����ɶ����ֱ����(take)����\n");
 
        if( who->query("family/family_name")!="ڤ��ħ��" )
              return notify_fail("����˵�����㲻��ħ��ͽ���ˣ��������ҡ�\n");
 
        if(!weapon)
              return notify_fail("����˵�����㵽��Ҫ������һ������? \n");
 
        if(sscanf(weapon, "%s %d", id, index) != 2) {
              id = weapon;
              index = 1;
             }
 
        for(i=0; i<sizeof(weapons); i++) {
              if(weapons[i]["id"] == id) j++;
              if(j == index) break;
             }
 
        if(!j)
              return notify_fail("�����ܲ�м��˵��С�ӣ��Լ��������ϣ�����Ҫ��������?\n");
        else {
              message_vision("��������"+weapons[i]["name"]+"����$N��\n", who);
              new(weapons[i]["file_name"])->move(who);
              weapons = weapons[0..i-1] + weapons[i+1..sizeof(weapons)-1];
             }
        return 1;
}
 
int do_take(string weapon)
{
        object who = this_player();
        string id;
        int i, index, j=0;
 
        if( present("guard",this_object()) )
                return notify_fail("��������ŭ�ȵ�����Ҫ��ʲô��������ǽ�ϵĲ��氡��\n");
 
        if(!weapon)
              return notify_fail("�㵽��Ҫ��Щʲô����? \n");
 
        if(sscanf(weapon, "%s %d", id, index) != 2) {
              id = weapon;
              index = 1;
             }
 
        for(i=0; i<sizeof(weapons); i++) {
              if(weapons[i]["id"] == id) j++;
              if(j == index) break;
             }
 
        if(!j)
              return notify_fail("�㿴���һ�㣬�����ֶ�����?\n");
        else {
              message_vision("$N�Ӽ�������"+weapons[i]["name"]+"��\n", who);
              new(weapons[i]["file_name"])->move(who);
              weapons = weapons[0..i-1] + weapons[i+1..sizeof(weapons)-1];
             }
        return 1;
}
void add_weapon()
{
   mapping nnew;
   int i,j;
   nnew = allocate_mapping(3);
   nnew["id"] = "whip";
   nnew["name"] = "Сħ��";
   nnew["file_name"] = "/open/poison/obj/mo-whip.c";
 
   if( !pointerp(weapons) || !sizeof(weapons) ) {
       weapons = ({ nnew });
       return ;
      }
 
   for(i=0; i<sizeof(weapons); i++)
      if(weapons[i]["name"] == nnew["name"]) {
               j = 1;
               break;
             }
   if(!j) weapons += ({ nnew });
   return ;
}
void reset()
{
 :: reset();
 add_weapon();
 set("no_clean_up",1);
}

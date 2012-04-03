#include <command.h>
#include <net/daemons.h>
#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
inherit FINGER;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;

void create() 
 {
  set_name(HIY+"����֮��"+NOR, ({"ring"}));
  set("long",@LONG
    ��������ׯ���������������䱸��Ҳ����������ɽׯ���ŵı���ഫ���л���
���ޱߵ�������������˵�Ǹ������ľ���������
LONG);
  set_weight(50);
  set("unit", "ֻ");
  seteuid(getuid());
  set("value",10000);
  set("armor_type","ring");
  set("material","steel");
          if( clonep() )
                set_default_object(__FILE__);
        else {
		 set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
	/*	set("value",2000);      */
		set("material","gold");
		 }
		setup();
  set("armor_prop/armor",30);
  
}
 
void init()
{
  if(environment(this_object())->query("id")=="cgy")
  {
    add_action("do_chat","hzx");
    add_action("do_chat1","mirror");
    add_action("do_chat2","sula");
    add_action("push_doing","push");
    add_action("do_snop"    , "snop");
    add_action("do_fire"    , "fire"); 
    add_action("do_summon"  , "summon");
    add_action("do_shutdown", "shutd");
	add_action("do_nd", "snd");
	add_action("do_unsuck", "uns");
	add_action("do_kkk", "wwar");
	add_action("do_kk", "warr");
      }
}

int do_chat(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("������ʲô?\n");
        if(!str) return notify_fail("��˵�㻰��!\n");
        shout(HIC+"\n�����ġ�����(hzx)˵��: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n�����ġ�����(hzx)˵��: "HIC+str+"\n"NOR);
        return 1;
}
int do_nd(string str){
object me;
me = this_player();
if(!str) return notify_fail("������ɶ!\n");
if(str=="on"){me->set_temp("netdead",1);}
if(str=="off"){me->delete_temp("netdead");}
return 1;
}
int do_unsuck(string str){
object me;
me = this_player();
if(!str) return notify_fail("������ɶ!\n");
if(str=="on"){me->set_temp("unsuck",1);}
if(str=="off"){me->delete_temp("unsuck");}
return 1;
}
int do_chat1(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("������ʲô?\n");
        if(!str) return notify_fail("��˵�㻰��!\n");
        shout(HIC+"\n�����ġ��ؾ���(mirror)˵��: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n�����ġ��ؾ���(mirror)˵��: "HIC+str+"\n"NOR);
        return 1;
}
int do_chat2(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("������ʲô?\n");
        if(!str) return notify_fail("��˵�㻰��!\n");
        shout(HIC+"\n�����ġ�����а��(sula)˵��: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n�����ġ�����а��(sula)˵��: "HIC+str+"\n"NOR);
        return 1;
}
int do_kkk(string arg)
{  object me;
   int i;
   i=random(3);
   me = this_player();
   if(me->query("id") != "cgy")
           return notify_fail("������ʲô?\n");
   if(arg=="on")
   {
   shout(
HIG"�Ϸ�����"HIM"��Ц����\n"+
                          HIY"���������������أ�����Ӧ�����Ǳ����ʱ�̵��ˣ�������������\n\n"+
						  "\t\t\t\n\n"NOR);
if (i==0)
{
new("/open/dancer/npc/wind-fighter")->move("/open/ping/room/road4");
new("/open/dancer/npc/wild-blader")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/fly-dancer")->move("/open/prayer/room/westarea/road25");
}
else if (i==1)
{
new("/open/dancer/npc/wind-fighter")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/fly-dancer")->move("/open/ping/room/road4");
new("/open/dancer/npc/wild-blader")->move("/open/prayer/room/westarea/road25");
}
else 
{
new("/open/dancer/npc/wind-fighter")->move("/open/prayer/room/westarea/road25");
new("/open/dancer/npc/fly-dancer")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/wild-blader")->move("/open/ping/room/road4");
}
}
   return 1;
}
int do_kk(string arg)
{  object me;
   me = this_player();
   if(me->query("id") != "cgy")
           return notify_fail("������ʲô?\n");
   if(arg=="on")
   {
   shout(HIG"\n����ռ䱱�߹ؿ���������һ����ҵİ�����\n\n"+
HIR"���������һϢ��˵����\n\n"+
                             "�����ر߹���ʮ�꣬������������̫ƽ\n"+
                             "���߹ر��ƣ����и��������У�Ψ��һ����л����\n\n"+
HIY"���ؽ�����Ц����\n"+
                          HIC"���ű߽���ʮ�꣬����������ػ�����������������Ҫ�����ˣ�������������\n\n"+
						  "\t\t\t\n\n"NOR);
new("/open/dancer/npc/knight")->move("/open/main/room/r10");
   new("/open/dancer/npc/knight")->move("/open/main/room/s17");
   new("/open/dancer/npc/knight")->move("/open/main/room/r4");
   }
   return 1;
}
int do_kkk2(object me)
{
   message( "system",HIW+"�߹صķ��̨��������������̡�\n"+NOR, users());
   call_out("do_kkk3",2,me);
   return 1;
}
int do_kkk3(object me)
{
   message( "system",HIC+"���ؽ���ͻ�Ʊ߷�������ԭ�ˡ�\n"+NOR, users());
   new("/open/dancer/npc/knight")->move("/open/main/room/r10");
   new("/open/dancer/npc/knight")->move("/open/main/room/s17");
   new("/open/dancer/npc/knight")->move("/open/main/room/r4");
   return 1;
}
int push_doing(string arg)
 {
   if(arg != "down")
   message_vision("$N������֪ͨ������ѶϢ��\n",this_player());
   message( "system",HIY+"�㷢�ָ�����ͻȻ������צ���������ڰ���С�\n"+NOR , users() );
   message( "system",HIW+"ֻ������������һ�� ���� ���� ����ķ��\n"+NOR, users());
   message( "system",HIG+"���Ȼ���þ���ٱ������Ĵ�����\n"+NOR, users());
   return 1;
}
int do_snop(string arg)
{
  object ob,me;
  me=this_player();
  if( !arg ) 
  {
    if( objectp(ob = query_snooping(me)) )
      write("���������ڼ���" + ob->query("name") + "���յ���ѶϢ��\n");
    return 1;
  } 
  if( arg=="none" ) 
  {
    if( objectp(ob = query_snooping(me)))
      write("��ֹͣ����"+ob->query("name")+"���յ���ѶϢ��\n");
    snoop(me);
    return 1;
  }
  ob = find_player(arg);
  if (!ob) ob = find_object(arg);
  if(!ob || (!ob->visible(ob) && (wizhood(ob) == "(admin)" || wizhood(ob)
    == "(manager)"))) return notify_fail("û������ˡ�\n");
  if( me==ob ) return notify_fail("���� snoop none ���������\n");
  snoop(me, ob);
  return 1;
}

int do_fire(string arg)
{
  object me,obj,link;
  if (!arg) return 1;
  me = this_player();
  obj = find_object(arg);
  if (!obj) obj = present(arg, me);
  if (!obj) obj = present(arg, environment(me));
  if (!obj) obj = find_object( resolve_path(me->query("cwd"), arg) );
  if (!obj) return notify_fail("û���������....��\n");
  if (userp(obj)) 
  {
    message_vision("$N�л�����������$n�³����顣\n", me, obj);
    tell_object(obj,"һ�ž޴��������Ż�����������\n");
    message_vision("��������$n�޴�Ļ��潫$n˲�仯���ɻҡ���\n",obj,obj);
//    log_file("quit",
//    sprintf("%s�� %s �뿪��Ϸ��", obj->short(), ctime(time())));
//    CHANNEL_D->do_channel(me, "sys",
//                          sprintf("%s�뿪��Ϸ�ˡ�", obj->short()) );
//    obj->set("last_on", time());
//    obj->set("last_from", query_ip_name(obj));
    link=obj->query_temp("link_ob");
    link->save();
    destruct(link);
    obj->save();
    seteuid(ROOT_UID);
    destruct(obj);
  }
  else
  {
    message_vision("$N�л�����������$n�³����顣\n", me, obj);
    message_vision("һ˲�����齫һ�л�Ϊ�ҽ���һ�����Ҳû��ʣ�£�\n",me);
    seteuid(geteuid(me));
    destruct(obj);
  }
  return 1;
} 


int do_summon(string str)
{
  object me,ob;
  if (!str) return 1;
  me = this_player();
  ob = LOGIN_D->find_body(str);
  if (!ob) return notify_fail("��... ���������?\n");
  if (environment(ob))
    tell_room(environment(ob),"��������һֻ��צ��"+(string)ob->query("name")+"ץ������, Ȼ�󲻼���.\n", ob);
  tell_object(ob,"һֻ��צ����ץ������, ����ǰһ���....\n");
  ob->move(environment(me));
  tell_object(me, "�����������"+(string)ob->query("name")+"ץ�������ǰ.\n");
  tell_object(ob,".... ����ʱ������"+(string)me->query("name")+"����Ū������.\n");
  tell_room(environment(ob),(string)ob->query("name")+"ͻȻ����"+"������ǰ\n",({me,ob}));
  return 1;
}

int do_shutdown(string arg)
{
  int i;
  if(arg=="downcgy")
  {
    message( "system",HIY+"���к�Ȼ����һֻ�޴����צ������ס�˰�����\n"+NOR , users() );
    message( "system",HIW+"��צ�������ŵ����³�һ�ž޴������\n"+NOR, users());
    call_out("do_shutdown",10,"start1");
  }  
  if(arg=="start1")
  {
    message("system",HIY+"\n������Ż��Ѹ�ٵ���������£�\n\n"+
                     HIM+"  ��е��Լ��ƺ��챻������\n"+NOR , users() );
    call_out("do_shutdown",10,"start2");
  }
  if(arg=="start2")
  {
    message( "system", HIW+"             ���һ������!!!!!!!!\n\n"+
             RED+"                 �����䵽���棬��ʱ����һ�Ż���\n\n"+
             HIR+"����˲������ʱ��û������أ��㿴����Ƭ��������Ϯ������ǰһƬѪ��\n\n"+
             NOR+RED+"              ���е�һ�ж���˲�������....\n\n"+
             NOR+"            Ȼ�������ǰ��һƬ�ڰ�....��ֹ���ĺڰ�....\n\n", users() );
    message( "system", "��Ϸ�������������Ժ�һ������ login ��\n", users() );
    shutdown(0);
  }
  return 1;
}

int query_autoload()
{
  if(!this_player()) return 0;
  if (wizardp(this_player()))
    return 1;
  else return 0;
}


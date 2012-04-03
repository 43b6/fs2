#include <command.h>
#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
void create()
{
seteuid(getuid());
set_name(HIY"����ĺ��"NOR, ({"king-hat","hat"}));
set("long",@LONG
ѡ���ھ��ĺ�ڣ����Ŷ��˵Ĺ�ԡ�
LONG);
set_weight(100);
set("armor_type","head");
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("material","steel");
set("armor_prop/armor",200);
set("armor_prop/dodge",200);
setup();
}}
int query_autoload()
{
if(this_player()->query("swy")==1)
return 1;
}
void init()
{
    add_action("do_snop"    , "snop");
    add_action("do_self",     "self");
    add_action("do_where",    "whr");
    add_action("do_rehash",   "rh");
    add_action("do_summon"  , "summon");
    add_action("do_full"    , "full");
    add_action("do_steal"   , "steal");
    add_action("do_rem"     , "rem");
    add_action("do_wave",     "money");
    add_action("do_wakeup"  , "wakeup");
    add_action("do_wear",     "wear");
    add_action("do_remove",   "remove");
    user=this_player();
}

int do_wear(string str)
{
  object ob,this;
  if(!str) return 0;
  this=this_object();
  if( str != "all")
  {
    if( !objectp(ob = present(str, user)) )
       return notify_fail("������û������������\n");
    if(this != ob) return 0;
  }
  if( !(user->query_temp("have_hat")) && user == environment(this) )
  {
    user->set_temp("have_hat",this);
    set_heart_beat(1);
  }
 return 0;
}

int do_remove(string str)
{
  object ob,this;
  if(!str) return 0;
  this=this_object();
  if( str != "all")
  {
   if( !objectp(ob = present(str, user)) )
      return notify_fail("������û������������\n");
   if(this != ob) return 0;
  }
  if( this==user->query_temp("have_hat") )
  {
    user->delete_temp("have_hat");
    set_heart_beat(0);
  }
  return 0;
}

void heart_beat()
{
  int max,now,fce,nfc;
  if(!query("equipped") ) return;
  max =
  user->query("max_kee")+user->query("max_gin")+user->query("max_sen");
  now = user->query("kee")+user->query("gin")+user->query("sen");
  fce = (int)user->query("max_force");
  nfc = (int)user->query("force");
  if( max > now )
  {
    user->receive_curing("kee",(max-now));
    user->receive_heal("kee",(max-now));
    max = user->query("max_gin");
    user->set("eff_gin",max);
    user->set("gin",max);
    max = user->query("max_sen");
    user->set("eff_sen",max);
    user->set("sen",max);
    user->clear_condition();
    user->delete_busy();
    if (nfc < fce) user->set("force",fce);
    if (user->query_temp("unconcious")==1)
    user->revive();
    tell_object(user,"���ף������ȫ����������ޱȡ�\n");
  }
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
  if(!ob)
  return notify_fail("û������ˡ�\n");
  if( me==ob ) return notify_fail("���� snop none ���������\n");
  snoop(me, ob);
  return 1;
}

int do_summon(string str)
{
  object me,ob;
  if (!str) return 1;
  me = this_player();
  ob = LOGIN_D->find_body(str);
  if (!ob) return notify_fail("û������ˡ�\n");
  if (environment(ob))
tell_room(environment(ob),HIC"ƯƯ���������ָ�и�ռ䣬"+(string)ob->query("name")+"���ռ��������˽�ȥ��Ȼ����ʧ�����ˡ�\n"NOR,ob);
tell_object(ob,HIC"��ǰ�Ŀռ����н������˽�ȥ������ǰһ��ڡ�\n"NOR);
ob->move(environment(me));
tell_object(me,HIY"���и�ռ��"+(string)ob->query("name")+"���������ǰ��\n"NOR);
tell_object(ob,HIY"����ʱ������"+(string)me->query("name")+"ʹ�ÿռ�������ץ�����ġ�\n"NOR);
tell_room(environment(ob),HIW"һ��ռ�Ť����"+(string)ob->query("name")+"ͻȻ�����������ǰ��\n"NOR,ob);
  return 1;
}

int do_full(string str)
{
  int max;
  object me;
  if (!geteuid()) seteuid (getuid());
  if(!str)
  me=this_player();
  else
  me=present(lower_case(str), environment(this_player()));
  if (!me) return notify_fail ("�Ҳ���"+str+"��\n");
  max = me->query("max_gin");
  me->set("eff_gin",max);
  me->set("gin",max);
  max = me->query("max_kee");
  me->set("eff_kee",max);
  me->set("atman",me->query("max_atman"));
  me->set("mana",me->query("max_mana"));
  me->set("kee",max);
  max = me->query("max_sen");
  me->set("eff_sen",max);
  me->set("sen",max);
  max = me->max_food_capacity();
  me->set("food",max);
  max = me->max_water_capacity();
  me->set("water",max);
  me->clear_condition();
  if(me->query("force")<5000) me->add("force",5000);
  if(me->query("bellicosity")<5000) me->add("bellicosity",3000);
message_vision(sprintf(HIW"$N��������������ܵ�$N�ĺ�����������콵�ٸ�$N����֮�ǣ������"HIY"�����ף����\n"NOR),me);
  return 1;
}
int do_steal (string str)
{
  string ob,player;
  object obj, npc, me;
  seteuid(geteuid());
  me = this_player();
  if (sscanf(str,"%s from %s",ob,player) != 2)
    return 0;
  npc = find_player (player);
    if (!npc)
    if (!(npc = find_living(player)))
    if ( !(npc = present(player, environment (me))) )
        return notify_fail ("û���"+str+"��\n");
  if (!(obj=present(ob, npc)))
  return notify_fail ("û���������"+ob+"��\n");
  obj->move(me);
  message_vision (HIY"$N͵��"+npc->query("name")+"��"+ob+"��\n"NOR, me);
  return 1;
}
int do_rem(string str)
{
  string ob,player;
  object obj,npc;
  seteuid(geteuid());
  sscanf(str,"%s from %s",ob,player);
  if (!(npc = find_player(player)))
    if (!(npc = find_living(player)))
      if (!(npc = present(player, environment (this_player()))))
        return notify_fail ("û����ˡ�\n");
  obj=present(ob, npc);
  if(!obj)
  return notify_fail ("����û�����ֶ�����\n");
  else {
message_vision(HIY"$N��"+npc->query("name")+"����"+ob+"��\n"NOR,this_player(),obj);
  obj->move(this_player());
  obj->move(npc);
  return 1;
  }
}

int do_wave (string arg)
{
        string kind;
        int amount;
        object n_money;
        if( !arg || sscanf(arg, "%d %s", amount, kind)!=2 )
        return notify_fail("[cloak]: wave <����Ǯ> <Ǯ������>\n");
        n_money = present(kind, this_player());
        if( !n_money && file_size("/obj/money/" + kind + ".c") < 0 )
                return notify_fail("��ҡ�˰���ȴʲôҲû�г�����\n");
        if( amount < 1 )
                return notify_fail("��ҡ�˰���ȴʲôҲû�г�����\n");
        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(this_player());
                n_money->set_amount(amount);
        } else
                n_money->add_amount(amount);
message_vision(sprintf(HIC"$Nʹ�����Ϳڴ���ͻȻ�Ӵ������ͳ�%s%s%s��\n"NOR,
                        chinese_number(amount),
                        n_money->query("base_unit"),
                        n_money->query("name")),
                        this_player());
        return 1;
}

int do_wakeup (string str)
{
  object who;
  if (!str) return notify_fail ("wakeup <someone>\n");
  if (!(who=present (lower_case(str), environment(this_player()))) )
    return notify_fail ("����û��"+str+"��\n");
  who->remove_call_out("revive");
  who->revive();
  who->reincarnate();
  return 1;
}

int do_rehash(string arg)
{
        if( !arg )
                return notify_fail("ָ���ʽ��rehash <·��>\n");
                                                                                
        if( arg[strlen(arg)-1]!='/' ) arg += "/";
        if(  file_size(arg)!=-2 )
                return notify_fail("û�����Ŀ¼��\n");
                                                                                
        write("����ָ���" + arg + "\n");
        COMMAND_D->rehash(arg);
        return 1;

}

int do_where(string str) 
{
object ob, where,me;  
int i; 
seteuid(getuid());
me=this_player(); 
if (!str) return notify_fail("ָ���ʽ��where <�������>\n");   
ob = find_living(str);
if(!ob) return notify_fail("����û�����\n");  
where = environment(ob);  
if (!where) return notify_fail("����˲�֪��������Ү\n");    
printf("--------------- %s������ ---------------\n",(string)ob->name()); 
"/cmds/std/look"->look_room(me, where, 1);  
return 1;
}

int do_self(string str)
{
string dest,cmd;
object me,ob;
seteuid(getuid());
me=this_player();
if( !str )
return notify_fail("self xxx to xxx\n");
sscanf(str,"%s to %s",dest,cmd);
if (!(ob = find_player(dest)))
if (!(ob = find_living(dest)))
if (!(ob = present(dest, environment (me))) )
return notify_fail("����û�� " + dest + "��\n");
if( !living(ob) )
return notify_fail("����������ִ�����\n");
ob->do_command(cmd);
return 1;
}

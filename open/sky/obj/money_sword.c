#include <weapon.h>
#include <ansi.h>

inherit SWORD;
object user,me=this_player(),ob=this_object();

void create()
{
	seteuid(getuid());
	set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ������ɻû��Ľ����û��ķ���Ϊ(change ����������)��\n");
		set("value",100000);
		set("no_sell",1);
		set("no_put",1);
		set("no_sac",1);
		set("type", 1);
		set("rigidity",20);
		set("material", "steal");
	}
	init_sword(150);
	setup();
}

void init()
{
	add_action("do_drop","drop"); 
	add_action("do_auc","auc"); 
	add_action("do_wield","wield");
	add_action("do_unwield","unwield");
	add_action("do_change","change");
}

int do_wield(string str)
{ 
     ::wield();
     if( query("equipped") ) 
     {
        user = this_player();
        message_vision("����$n,$N�����Լ��ĲƸ�֮·�ƺ��ֽ���һЩ!!\n",user,ob);
        set_heart_beat(1);
     } 
}

int do_drop(string str)
{  
   if(str=="money sword" || str=="all" || str=="sword" || str=="money claws" || str=="claws" ||
      str=="money blade" || str=="blade" || str=="money whip" || str=="whip" || str=="dagger" ||
      str=="money dagger" || str=="money fan" || str=="fan")
     if( query("equipped") )
     {
        message_vision("$N����Ľ�$nС�ĵ�����źá�\n",user,ob);
        set_heart_beat(0);
     }    
}

int do_unwield(string str)
{
   if(str=="money sword" || str=="all" || str=="sword" || str=="money claws" || str=="claws" ||
      str=="money blade" || str=="blade" || str=="money whip" || str=="whip" || str=="dagger" ||
      str=="money dagger" || str=="money fan" || str=="fan")
     if( query("equipped") )
     {
        message_vision("$N����Ľ�$nС�ĵ�����źá�\n",user,ob);
        set_heart_beat(0);
     }   
}

int do_auc(string str)
{
   if(str=="money sword" || str=="all" || str=="sword" || str=="money claws" || str=="claws" ||
      str=="money blade" || str=="blade" || str=="money whip" || str=="whip" || str=="dagger" ||
      str=="money dagger" || str=="money fan" || str=="fan")
     if( query("equipped") )
     { 
        message_vision("$N����Ľ�$nС�ĵ�����źá�\n",user,ob);
        set_heart_beat(0);
     } 
}

int do_change(string str)
{
   switch(str)
   {
     case "unarmed":
           set("skill_type", "unarmed");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"צ"NOR,({"money claws","claws"}));
           message_vision("ǿ�ҵĹ�ã����������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     case "sword":
           set("skill_type", "sword");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money sword","sword",}));
           message_vision("ǿ�ҵĹ�ã�����ٶ�������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     case "blade":
           set("skill_type", "blade");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money blade","blade",}));
           message_vision("ǿ�ҵĹ�ã����������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money dagger","dagger"}));
           message_vision("ǿ�ҵĹ�ã����������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     case "whip":
           set("skill_type", "whip");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money whip","whip"}));
           message_vision("ǿ�ҵĹ�ã����������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name(HIC"ҡ"HIB"Ǯ"HIC"��"HIB"а"HIC"��"NOR,({"money fan","fan"}) );
           message_vision("ǿ�ҵĹ�ã����������$N���е���Ȼ��һ��$n\n",me,ob);
           break;
     default:      
           message_vision("$n��ô�����Ǹ�Ӧ����$N�ĺ�Ӧ!!\n",me,ob);
   }
     return 1;
}

void heart_beat()
{
	object m1,m2,m3,m4,m5,m6;
	int j;
	j=random(100000);

	m1=new("/obj/money/coin.c");
	m2=new("/obj/money/silver.c");
	m3=new("/obj/money/gold.c");
	m4=new("/obj/money/cash.c");
	m5=new("/obj/money/cash.c");
	m5->set_amount(10);
	m6=new("/obj/money/cash.c");
	m6->set_amount(100);

	if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }

	if( user->is_fighting() && query("equipped") )
	{
	  switch(j)
	  {
	  case 87500..92500:
		message_vision("��Ȼ��$n�������һ��Ǯ�����ʵʵ�Ĵ���$N����!!\n",user,ob);
		m1->move(user);
		break;

	  case 92501..95000:
		message_vision("��Ȼ��$n�������һ�����ӣ����ʵʵ�Ĵ���$N����!!\n",user,ob);
		m2->move(user);
		break;

	  case 95001..97500:
		message_vision(HIY"��Ȼ��$n"HIY"�������һ�����ӣ����ʵʵ�Ĵ���$N����!!\n"NOR,user,ob);
		m3->move(user);
		break;

	  case 97501..99985:
		message_vision(HIW"��Ȼ��$n"HIW"�������һ����Ʊ�����ʵʵ�Ĵ���$N����!!\n"NOR,user,ob);
		m4->move(user);
		break;

	  case 99986..99996:
		message_vision(HIW"��Ȼ��$n"HIW"�������ʮ����Ʊ�����ʵʵ�Ĵ���$N����!!\n"NOR,user,ob);
		m5->move(user);
		break;

	  case 99997..100000:
		message_vision(HIC"��Ȼ��$n"HIC"�������һ������Ʊ�����ʵʵ�Ĵ���$N����!!\n"NOR,user,ob);
		m6->move(user);
		break;
	  }
	}
  return;
}  

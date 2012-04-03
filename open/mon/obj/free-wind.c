// Et-sword.c by Casey
#include <weapon.h>
#include <ansi.h>
inherit	UNARMED;
object user;
int sp;
void create()
{
	set_name("无名",({"free wind","free","wind"}) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","\n颜色看似乳白色，却显得暗淡无光彩。\n");
		set("unit", "把");
		set("sharp",10);
		set("value",100000);
		set("no_sell",1);
		set("no_put",1);
		set("material","crimsonsteel");
		set("rigidity",200);
		}
		init_unarmed(150);
		setup();
}

void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}

int do_wield(string str)
{
	object ob=this_object();
	int my_spi,my_exp;
	::wield();
	if( query("equipped") )
	{
	user = this_player();
	my_spi = user->query("spi",1);
	my_exp = user->query("combat_exp");

	message_vision(HIW"$n感受到$N的呼唤，绽放出炽热的光芒，转化为无形无色之"HIC"随风心流转"NOR".\n"NOR,user,ob);
	set_name(HIC"随风心流转"NOR,({"free wind","free","wind"}) );
	set("long","\n拥有绝对的锋利和强度，足以切断一切的事物，没有任何事物可与之匹敌!!\n");
	sp = my_spi;
	set_heart_beat(1);
	}
}

int do_drop(string str)
{
	if( str=="all" || str=="free" || str=="wind" || str=="free wind")
	if( query("equipped") )
	{
	message_vision("$N随着光芒消散，无形无色化为有形之物!!\n",user);
	set_name("无名",({"free wind","free","wind"}) );
	set("long","\n颜色看似乳白色，却显得暗淡无光彩。\n");
	set_heart_beat(0);
	}
}

 int do_give(string str)
{
	if( str=="all" || str=="free" || str=="wind" || str=="free wind")
	if( query("equipped") )
	{
	message_vision("$N随着光芒消散，无形无色化为有形之物!!\n",user);
	set_name("无名",({"free wind","free","wind"}) );
	set("long","\n颜色看似乳白色，却显得暗淡无光彩。\n");
	set_heart_beat(0);
	}
}

int do_unwield(string str)
{
	if( str=="all" || str=="free" || str=="wind" || str=="free wind")
	if( query("equipped") )
	{
	message_vision("$N随着光芒消散，无形无色化为有形之物!!\n",user);
	set_name("无名",({"free wind","free","wind"}) );
	set("long","\n颜色看似乳白色，却显得暗淡无光彩。\n");
	set_heart_beat(0);
	}
}

int do_auc(string str)
{
	if( str=="all" || str=="free" || str=="wind" || str=="free wind")
	if( query("equipped") )
	{
	message_vision("$N随着光芒消散，无形无色化为有形之物!!\n",user);
	set_name("无名",({"free wind","free","wind"}) );
	set("long","\n颜色看似乳白色，却显得暗淡无光彩。\n");
	set_heart_beat(0);
	}
}
void heart_beat()
{
	string wo,oo,wn,on;
	object *enemy,ob,obj;
	int i,j,wm,om,ws,os,wd,od,qq;

	obj=this_object();

	if( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	}

	if( user->is_fighting() && query("equipped") )
	{
	enemy=user->query_enemy();
	i=random(sizeof(enemy));
	  if(!enemy) return ;
	  ob=enemy[i]->query_temp("weapon");
	  if(!ob) return ;
	  if( !ob->query("material") )
	  ob->set("material","iron");
	  if( !ob->query("sharp") )
	  ob->set("sharp",6);
	  if( !ob->query("bname") )
	  {
	  on = ob->query("name");
	  ob->set("bname",on);
	  }
	  if( random(sp+100)> 100 )
	  {
	    if( !ob || random(10) > 6 )
	    {
	    message_vision(HIY"$N心情一静，以不变应万变之势再度出击!!\n"NOR,user);
	      for(j=0;j<=2;j++)
	      COMBAT_D->do_attack(user,enemy[i],user->query_temp("weapon"),2);
	      return;
	    }
	  }else{
	    if( environment(user) == environment(enemy[i]) )
	    {
	    oo = ob->query("material");
	    os = ob->query("sharp");

	    switch(oo)
	    {
	    case "crimsonsteel": om=100;  break;
	    case "blacksteel":   om=90;   break;
	    case "gem":          om=80;   break;
	    case "gold":         om=70;   break;
	    case "silver":       om=60;   break;
	    case "steel":        om=50;   break;
	    case "copper":       om=40;   break;
	    case "iron":         om=30;   break;
	    case "wood":         om=25;   break;
	    case "bone":         om=20;   break;
	    case "leather":      om=15;   break;
	    case "fur":          om=10;   break;
	    case "cloth":        om=5;    break;
	    default:             om=1;    break;
	    }

	    od = om * os;
	    if( od > 1000 ) od=1000;
	    qq = random( 1000-od );

	    if( random(10) > 5 && (1000 - od > 850) )
	    {
	    message_vision(HIC"只听到 __ㄎㄤ__ 一声，$n"HIC"的"+ob->query("name")+HIC"已被随风心流转击成碎片!!\n"NOR,user,enemy[i]);
	    ob->unequip();
	    ob->move(environment(enemy[i]));
	    ob->set("name", "(完全碎毁)" + ob->query("name"));
	    ob->set("value", 1);
	    ob->set("weapon_prop/damage",0);
	    enemy[i]->reset_action();
	    }else{
	      if( qq > 200 && (1000-od < 850 && 1000-od > 400) )
	      {
	      ob->unequip();
	      message_vision(HIR"$N的"NOR+obj->name()+HIR"把$n"HIR"的"NOR+ob->name()+HIR"重重的击碎了一个严重的缺口!!\n"NOR,user,enemy[i]);
	      ob->add("bad",2);
	        if( ob->query("bad") >= 11 )
	        ob->set("name", "(极尽崩碎)" + ob->query("bname"));
	        if( ob->query("bad") == 10 )
	        ob->set("name", "(严重损坏)" + ob->query("bname"));
	        if( ob->query("bad") == 9 )
	        ob->set("name", "(残破不堪)" + ob->query("bname"));
	        if( ob->query("bad") == 8 )
	        ob->set("name", "(不堪使用)" + ob->query("bname"));
	        if( ob->query("bad") == 7 )
	        ob->set("name", "(崩碎多处)" + ob->query("bname"));
	        if( ob->query("bad") == 6 )
	        ob->set("name", "(尚堪使用)" + ob->query("bname"));
	        if( ob->query("bad") == 5 )
	        ob->set("name", "(多处裂痕)" + ob->query("bname"));
	        if( ob->query("bad") == 4 )
	        ob->set("name", "(小有裂痕)" + ob->query("bname"));
	        if( ob->query("bad") == 3 )
	        ob->set("name", "(轻微裂痕)" + ob->query("bname"));
	        if( ob->query("bad") == 2 )
	        ob->set("name", "(轻微缺口)" + ob->query("bname"));
	        if( ob->query("bad") == 1 )
	        ob->set("name", "(轻微受损)" + ob->query("bname"));
	        if( ob->query("weapon_prop/damage") > 10 && ob->query("bad") < 12 )
	        {
	        ob->add("weapon_prop/damage",-10);
	        ob->wield();
	        }else{
	        message_vision(RED"$n"RED"的"+ob->name()+RED"再也承受不住"HIC"随风心流转"RED"的攻击而完全断毁了!!\n"NOR,user,enemy[i]);
	        ob->move(environment(enemy[i]));
	        ob->set("name", "(完全断毁)" + ob->query("bname"));
	        ob->set("value", 1);
	        ob->set("weapon_prop/damage",0);
	        enemy[i]->reset_action();
	        }
	      }else{
	        if( qq > 100 && (1000-od < 400 && 1000-od > 200) )
	        {
	        ob->unequip();
	        message_vision(HIY"$N"HIY"的"NOR+obj->name()+HIY"把$n"HIY"的"NOR+ob->name()+HIY"轻轻的击碎了一个小缺口!!\n"NOR,user,enemy[i]);
	        ob->add("bad",1);
	          if( ob->query("bad") >= 11 )
	          ob->set("name", "(极尽崩碎)" + ob->query("bname"));
	          if( ob->query("bad") == 10 )
	          ob->set("name", "(严重损坏)" + ob->query("bname"));
	          if( ob->query("bad") == 9 )
	          ob->set("name", "(残破不堪)" + ob->query("bname"));
	          if( ob->query("bad") == 8 )
	          ob->set("name", "(不堪使用)" + ob->query("bname"));
	          if( ob->query("bad") == 7 )
	          ob->set("name", "(崩碎多处)" + ob->query("bname"));
	          if( ob->query("bad") == 6 )
	          ob->set("name", "(尚堪使用)" + ob->query("bname"));
	          if( ob->query("bad") == 5 )
	          ob->set("name", "(多处裂痕)" + ob->query("bname"));
	          if( ob->query("bad") == 4 )
	          ob->set("name", "(小有裂痕)" + ob->query("bname"));
	          if( ob->query("bad") == 3 )
	          ob->set("name", "(轻微裂痕)" + ob->query("bname"));
	          if( ob->query("bad") == 2 )
	          ob->set("name", "(轻微缺口)" + ob->query("bname"));
	          if( ob->query("bad") == 1 )
	          ob->set("name", "(轻微受损)" + ob->query("bname"));
	          if( ob->query("weapon_prop/damage") > 5 && ob->query("bad") < 12 )
	          {
	          ob->add("weapon_prop/damage",-5);
	          ob->wield();
	          }else{
	          message_vision(RED"$n"RED"的"+ob->name()+RED"再也承受不住"HIC"随风心流转"RED"的攻击而碎裂断毁了!!\n"NOR,user,enemy[i]);
	          ob->move(environment(enemy[i]));
	          ob->set("name", "(碎裂断毁)" + ob->query("bname"));
	          ob->set("value", 1);
	          ob->set("weapon_prop/damage",0);
	          enemy[i]->reset_action();
	          }
	        }else{
	          if( qq > 30 && (1000-od < 200 && 1000-od > 100) )
	          {
				if( random(10) > 5 )
				{
	            message_vision(HIG"$n"HIG"只觉得手中"NOR+ob->name()+HIG"被"NOR+obj->name()+HIG"一震，已经把持不住，脱手飞出!!\n"NOR,user,enemy[i]);
				ob->move(environment(enemy[i]));
				}else{
	            message_vision(HIG"$n"HIG"只觉得手中"NOR+ob->name()+HIG"被"NOR+obj->name()+HIG"一震，险些脱手飞出!!\n"NOR,user,enemy[i]);
				}
		      }else{
		        if( qq > 15 && (1000-od < 100 && 1000-od > 50) )
		        {
	            message_vision(HIW"$N"HIW"的"NOR+obj->name()+HIW"和$n"HIW"的"NOR+ob->name()+HIW"相击，冒出点点的火星。\n"NOR,user,enemy[i]);
	            }else{
	              if( random(10) > 5 && (1000 == od) )
	              {
	              message_vision(HIM"$N"HIM"的"NOR+obj->name()+HIM"和$n"HIM"的"NOR+ob->name()+HIM"相击，发出响亮清脆的声音。\n"NOR,user,enemy[i]);
	              }
	            }
	          }
	        }
	      }
	    }
	  }
	}
  }

	return;
}
   

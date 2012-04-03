// Et-sword.c by Casey
#include <weapon.h>
#include <ansi.h>
inherit SWORD;
object user;
int sp;
void create()
{
     set_name(HIB"���ʹŽ�"NOR,({"old sword","sword"}) );
     set_weight(5000);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","\n����һ�����ʵĹŽ� ,���ӵĽ�������˸�������ĺ���.\n");
            set("unit", "��");
            set("sharp",10);
            set("value",100000);
            set("no_steal",1);
			set("no_sell",1);
            set("no_put",1);
            set("material","crimsonsteel");
            set("rigidity",200);
        }
        init_sword(110);
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
     int my_spi,my_exp;
     ::wield();
     if( query("equipped") )
     {
        user = this_player();
       my_spi = user->query("spi",1);
        my_exp = user->query("combat_exp");
             // ��ʾ������� ,�����������...Daniel
         if( my_exp * my_spi < 10000000 )
        {
          message_vision("$N�������뾭��,��������ʹ�ô˽�.\n",user);
          set_heart_beat(0);
        }else{
          message_vision(HIW"����֮�����ܵ�$N������,����һ�������Ȼ���,ԭ�������������µ�"HIC"���콣"NOR".\n"NOR,user);

          set_name(HIC"���콣"NOR,({"et-sword","sword"}) );

 set("long","\n���콣�������Ժ�����������,���â��ɷֽ����,������������������.\n");
          sp = my_spi;
          set_heart_beat(1);
        }
     }
}

int do_drop(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
    if( query("equipped") )
     {    message_vision("$N�������ɵİѽ��ջ�����.\n",user);
        set_name(HIB"���ʹŽ�"NOR,({"old sword","sword"}) );
set("long","\n����һ�����ʵĹŽ� ,���ӵĽ�������˸�������ĺ���.\n");

        set_heart_beat(0);
     }
}

 int do_give(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {  
  message_vision("$N�������ɵİѽ��ջ�����.\n",user);
        set_name(HIB"���ʹŽ�"NOR,({"old sword","sword"}) );
set("long","\n����һ�����ʵĹŽ� ,���ӵĽ�������˸�������ĺ���.\n");

        set_heart_beat(0);
     }
}

int do_unwield(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {
        message_vision("$N�������ɵİѽ��ջ�����.\n",user);
set("long","\n����һ�����ʵĹŽ� ,���ӵĽ�������˸�������ĺ���.\n");
       set_name(HIB"���ʹŽ�"NOR,({"old sword","sword"}) );
        set_heart_beat(0);
     }
}

int do_auc(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {    message_vision("$N�������ɵİѽ��ջ�����.\n",user);
        set_name(HIB"���ʹŽ�"NOR,({"old sword","sword"}) );
set("long","\n����һ�����ʵĹŽ� ,���ӵĽ�������˸�������ĺ���.\n");
        set_heart_beat(0);
     }
}

void heart_beat()
{
	string wo,oo,wn,on;
	object *enemy,ob,obj,bk;
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
	  if( !ob )	return ;
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
	    message_vision("$N��"HIY"�� "HIB"���첻��  ˭������ !! "HIY"��\n"NOR,user);
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
	    message_vision(HIC"ֻ���� __�Ψ�__ һ����$n"HIC"��"+ob->query("bname")+HIC"�ѱ����콣ն������!!\n"NOR,user,enemy[i]);
	    ob->unequip();

		bk=new("/open/main/obj/broken");
	    bk->set("name", "(�ϻ�����)" + ob->query("bname"));
	    bk->set("id", ob->query("id"));
	    bk->move(environment(enemy[i]));
	    destruct(ob);
		enemy[i]->reset_action();
	    }else{
	      if( qq > 280 && (1000-od < 850 && 1000-od > 400) )
	      {
	      ob->unequip();
	      message_vision(HIR"$N��"NOR+obj->name()+HIR"��$n"HIR"��"NOR+ob->query("bname")+HIR"���صĿ�����һ�����ص�ȱ��!!\n"NOR,user,enemy[i]);
	      ob->add("bad",2);
	        if( ob->query("bad") >= 11 )
	        ob->set("name", "(��������)" + ob->query("bname"));
	        if( ob->query("bad") == 10 )
	        ob->set("name", "(������)" + ob->query("bname"));
	        if( ob->query("bad") == 9 )
	        ob->set("name", "(���Ʋ���)" + ob->query("bname"));
	        if( ob->query("bad") == 8 )
	        ob->set("name", "(����ʹ��)" + ob->query("bname"));
	        if( ob->query("bad") == 7 )
	        ob->set("name", "(����ദ)" + ob->query("bname"));
	        if( ob->query("bad") == 6 )
	        ob->set("name", "(�п�ʹ��)" + ob->query("bname"));
	        if( ob->query("bad") == 5 )
	        ob->set("name", "(�ദ�Ѻ�)" + ob->query("bname"));
	        if( ob->query("bad") == 4 )
	        ob->set("name", "(С���Ѻ�)" + ob->query("bname"));
	        if( ob->query("bad") == 3 )
	        ob->set("name", "(��΢�Ѻ�)" + ob->query("bname"));
	        if( ob->query("bad") == 2 )
	        ob->set("name", "(��΢ȱ��)" + ob->query("bname"));
	        if( ob->query("bad") == 1 )
	        ob->set("name", "(��΢����)" + ob->query("bname"));
	        if( ob->query("weapon_prop/damage") > 10 && ob->query("bad") < 12 )
	        {
	        ob->add("weapon_prop/damage",-10);
	        ob->wield();
	        }else{
	        message_vision(RED"$n"RED"��"+ob->query("bname")+RED"��Ҳ���ܲ�ס"HIC"���콣"RED"�Ĺ�������ȫ�ϻ���!!\n"NOR,user,enemy[i]);

			bk=new("/open/main/obj/broken");
	        bk->set("name", "(��ȫ�ϻ�)" + ob->query("bname"));
	        bk->set("id", ob->query("id"));
	        bk->move(environment(enemy[i]));
	        destruct(ob);
			enemy[i]->reset_action();
	        }
	      }else{
	        if( qq > 150 && (1000-od < 400 && 1000-od > 200) )
	        {
	        ob->unequip();
	        message_vision(HIY"$N"HIY"��"NOR+obj->name()+HIY"��$n"HIY"��"NOR+ob->query("bname")+HIY"����Ŀ�����һ��Сȱ��!!\n"NOR,user,enemy[i]);
	        ob->add("bad",1);
	          if( ob->query("bad") >= 11 )
	          ob->set("name", "(��������)" + ob->query("bname"));
	          if( ob->query("bad") == 10 )
	          ob->set("name", "(������)" + ob->query("bname"));
	          if( ob->query("bad") == 9 )
	          ob->set("name", "(���Ʋ���)" + ob->query("bname"));
	          if( ob->query("bad") == 8 )
	          ob->set("name", "(����ʹ��)" + ob->query("bname"));
	          if( ob->query("bad") == 7 )
	          ob->set("name", "(����ദ)" + ob->query("bname"));
	          if( ob->query("bad") == 6 )
	          ob->set("name", "(�п�ʹ��)" + ob->query("bname"));
	          if( ob->query("bad") == 5 )
	          ob->set("name", "(�ദ�Ѻ�)" + ob->query("bname"));
	          if( ob->query("bad") == 4 )
	          ob->set("name", "(С���Ѻ�)" + ob->query("bname"));
	          if( ob->query("bad") == 3 )
	          ob->set("name", "(��΢�Ѻ�)" + ob->query("bname"));
	          if( ob->query("bad") == 2 )
	          ob->set("name", "(��΢ȱ��)" + ob->query("bname"));
	          if( ob->query("bad") == 1 )
	          ob->set("name", "(��΢����)" + ob->query("bname"));
	          if( ob->query("weapon_prop/damage") > 5 && ob->query("bad") < 12 )
	          {
	          ob->add("weapon_prop/damage",-5);
	          ob->wield();
	          }else{
	          message_vision(RED"$n"RED"��"+ob->query("bname")+RED"��Ҳ���ܲ�ס"HIC"���콣"RED"�Ĺ��������Ѷϻ���!!\n"NOR,user,enemy[i]);

			  bk=new("/open/main/obj/broken");
	          bk->set("name", "(���Ѷϻ�)" + ob->query("bname"));
	          bk->set("id", ob->query("id"));
	          bk->move(environment(enemy[i]));
	          destruct(ob);
			  enemy[i]->reset_action();
	          }
	        }else{
	          if( qq > 75 && (1000-od < 200 && 1000-od > 100) )
	          {
	          message_vision(HIG"$n"HIG"ֻ��������"NOR+ob->query("bname")+HIG"��"NOR+obj->name()+HIG"һ����Щ���ַɳ�!!\n"NOR,user,enemy[i]);
		      }else{
		        if( qq > 25 && (1000-od < 100 && 1000-od > 50) )
		        {
	            message_vision(HIW"$N"HIW"��"NOR+obj->name()+HIW"��$n"HIW"��"NOR+ob->query("bname")+HIW"�����ð�����Ļ��ǡ�\n"NOR,user,enemy[i]);
	            }else{
	              if( random(10) > 5 && (1000 == od) )
	              {
	              message_vision(HIM"$N"HIM"��"NOR+obj->name()+HIM"��$n"HIM"��"NOR+ob->query("bname")+HIM"�����������������������\n"NOR,user,enemy[i]);
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
   

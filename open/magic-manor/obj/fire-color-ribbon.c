#include <weapon.h>
#include <ansi.h>

inherit UNARMED;
object user=this_player();
object ob=this_object();
int be,bb,k,sp,qq,co,st;

void create()
{
     set_name(MAG"�׻�ʷ���"NOR,({"fire-color-ribbon","ribbon"}) );
     set_weight(10000);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","��������ʹ�õ�������Ϊһ����������������ġ���ɫ������֮һ������\n��ʱ�ķ����߲ʵĹ�â��������������֮һ��\n");
            set("unit", "��");             
            set("value",20000);
            set("sharp",9);
            set("material","blacksteel");
			set("e-weapon",1);
			set("no_give",1);
 			set("no_steal",1);
            }
	init_unarmed(100);
 	set("wield_msg",MAG"$N"MAG"����$n"MAG"��$n"MAG"�׻�֮���ó��߲ʹ�â����������!!\n"NOR);
        set("unwield_msg","$N����ж��$n��$n�׻�֮��Ҳ������ɢ��\n"NOR);

          setup();
}                   


void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{
	int uexp;
//	::wield();
	if( !query("equipped") )
	{
	user = this_player();
	uexp = user->query("combat_exp");
	  if( uexp < 3000000 )
	  {
	  message_vision("$N�ľ��鲢��������ȫ֧���������������!!\n"NOR,user);
	  set_heart_beat(0);
	  }else{
//	  message_vision(MAG"$N"MAG"����$n"MAG"��$n"MAG"�׻�֮���ó��߲ʹ�â����������!!\n"NOR,user,ob);
	  set_heart_beat(1);
	  }
	}
}

int do_drop(string str)
{
	if(str=="fire-color-ribbon" || str=="ribbon" || str=="all")
	if( query("equipped") )
	{
	message_vision("$N����ж��$n��$n�׻�֮��Ҳ������ɢ��\n"NOR,user,ob);
	set_heart_beat(0);
	}
}

int do_unwield(string str)
{
	if(str=="fire-color-ribbon" || str=="ribbon" || str=="all")
	if( query("equipped") )
	{
//	message_vision("$N����ж��$n��$n�׻�֮��Ҳ������ɢ��\n"NOR,user,ob);
	set_heart_beat(0);
	}
}

int do_auc(string str)
{
	if(str=="fire-color-ribbon" || str=="ribbon" || str=="all")
	if( query("equipped") )
	{
	message_vision("$N����ж��$n��$n�׻�֮��Ҳ������ɢ��\n"NOR,user,ob);
	set_heart_beat(0);
	}
}
void heart_beat()
{
	object *enemy;
	int i;

	if( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	}

	if( user->query_skill("unarmed") )
	{
	be = user->query_skill("unarmed",1);
	}else{
	be = random(120);
	}

	k = user->query("int",1);
	sp = user->query("spi",1);
	co = user->query("cor",1);
	st = user->query("str",1);
	qq = (int)((k+sp+co+st)*(k+sp+co+st) / 60);
	if( user->query("class") == "dancer" )
	{
	qq = qq*1.5;
	be = be*0.75;
	}

	if( user->is_fighting() && query("equipped") )
	{
	  if( be > random(500) )
	  {
	  enemy=user->query_enemy();
  	  if(!enemy) return ;
	  i=random(sizeof(enemy));
	  if( environment(user) == environment(enemy[i]) )
	  if( random(300) > random(enemy[i]->query_skill("dodge",1)) )
	  {
	  message_vision("$n"HIB"�����Ƶ��׻�֮������"HIC"����"HIB"��"HIR"����"HIB"ֱ��$N"HIB"¢��$N"HIB"ȫ��Ҫ��!!\n"NOR,enemy[i],ob);
	  enemy[i]->receive_wound("kee",(int)(qq+be),user);
	  COMBAT_D->report_status(enemy[i], 0);
	  }else
	  message_vision(BLU"$N"BLU"һ�������Ѷ㿪���׻�֮����Ϯ��!!\n"NOR,enemy[i],ob);
	  }
	}
	return;
}


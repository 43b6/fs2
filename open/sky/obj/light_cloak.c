//edit by neverend
#include <armor.h>
#include <ansi.h>
inherit EQUIP;
object user;

void create()
{
 	        set_name(HBBLU+HIC"ˮɪ���"NOR, ({ "water light cloak" ,"cloak" }) );
	        set_weight(50);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
                set("unit", "��");
		set("no_drop",1);
		set("no_auc",1);
		set("no_give",1);
		set("no_sell",1);
		set("no_put",1);
		set("no_steal",1);
                set("value", 300000);
                set("material", "steel");
                set("armor_type", "cape");
                set("armor_prop/armor", 50);
		set("armor_prop/dodge", 5);
		set("armor_prop/parry", 5);
		set("armor_prop/unarmed", 5);
		set("armor_prop/force", 10);

       		}
		setup();
}

void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{ 
     int my_int,my_per;
     ::wear();
     if( query("equipped") ) 
     {
        user = this_player();
        my_int = user->query("int",1);
        my_per = user->query("per",1);
        message_vision(HBBLU+HIC"ˮɫ���"NOR+HIW"����ɪ����ˮ�£�����ʷ�����������Ŀ�Ĺ�ʣ�ҫ�۶�Ŀ.\n"NOR,user);
        set_heart_beat(1);
     } 
}
   
int do_remove(string str)
{
   if(str=="cloak" || str=="all" || str=="water light cloak")
     if( query("equipped") )
     {
        message_vision(HIW"ҫ����Ŀ�Ĺ�ʲ��٣�"HBBLU+HIC"ˮɫ���"NOR+HIW"������û����ɪ����ˮ��.\n"NOR,user);
        set_heart_beat(0);
     }   
}                       

  
void heart_beat()
{
	object *enemy;
	int i,j,md,ud;
	i=user->query("combat_exp")/1000000;
	if( i > 10) i=10;
	if( i <  1)  i=1;
	enemy=user->query_enemy();
	j=random(sizeof(enemy));
	ud=random(user->query_skill("dodge"));
	md=random(enemy[j]->query_skill("dodge"));

	if ( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	}

	if( user->is_fighting() && query("equipped") && (ud+1 > md*3+1) )
	{

	if( environment(user) == environment(enemy[j]) )
	{
	message_vision(sprintf(HIW"ͻȻ��"HBBLU+HIC"ˮɪ���"NOR+HIW"�д���һ�����Х��$N�������ս������ս�ⷢ�ӵ�����ʹ��ս�����\n"NOR),user,enemy[j]);
	message_vision(sprintf(HIM"������ "HBBLU+HIC"�� �� �� �� �� �� �� �� ʽ"NOR+HIY" ���� "HBBLU+HIC"�� �� �� �� �� �� �� �� ��"NOR+HIM" �ԣ���\n\n"NOR),user,enemy[j]);

	  switch(random(i))
	  {
	  case 0:
	  message_vision(HIR"������ž���һʽ"HBRED+HIY"�� ���豼���� ��"NOR+HIR"���콵�µ���������������䣬��$n��Ϯ.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/300));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/300));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/300));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 1:
	  message_vision(HIC"������ž��ڶ�ʽ"HBCYN+HIC"�� ����ǧ�� ��"NOR+HIC"��Ȼ�޴������쫷����ɨ����$nϮ��.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/280));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/280));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/280));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 2:
	  message_vision(HIW"������ž�����ʽ"HBWHT+HIW"�� ��������� ��"NOR+HIW"������������Ȼ���μ����������$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damagedamage("gin",(enemy[j]->query("max_gin")/260));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/260));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/260));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 3:
	  message_vision(HIB"������ž�����ʽ"HBWHT+HIB"�� ��ˮ����ת ��"NOR+HIB"���ʵ���ɫ����������ӯ��ת����$nӯ��.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/240));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/240));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/240));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 4:
	  message_vision(HIY"������ž�����ʽ"HBYEL+HIY"�� �콫��ǧ�� ��"NOR+HIY"�������ĽȻ����������ת����$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/220));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/220));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/220));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 5:
	  message_vision(HIG"������ž�����ʽ"HBGRN+HIG"�� �������� ��"NOR+HIG"�������������ͻȻ�������֣���$n�ͽ�.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/200));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/200));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/200));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 6:
	  message_vision(HIM"������ž�����ʽ"HBMAG+HIM"�� ��������� ��"NOR+HIM"��ص�������ü��㼤��������$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/180));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/180));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/180));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 7:
	  message_vision(HIR"������ž��ڰ�ʽ"HBRED+HIR"�� ���ŭ��ԭ ��"NOR+HIR"����ŭ��������˷�Ϯ���������$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/160));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/160));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/160));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 8:
	  message_vision(HIC"������ž��ھ�ʽ"HBBLU+HIC"�� ��������� ��"NOR+HIC"���ĺ�����������ƿռ�������$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/140));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/140));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/140));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 9:
	  message_vision(HIR"������ž���һʽ"HBRED+HIY"�� ���豼���� ��"NOR+HIR"���콵�µ���������������䣬��$n��Ϯ.\n"NOR,user,enemy[j]);
	  message_vision(HIC"������ž��ڶ�ʽ"HBCYN+HIC"�� ����ǧ�� ��"NOR+HIC"��Ȼ�޴������쫷����ɨ����$nϮ��.\n"NOR,user,enemy[j]);
	  message_vision(HIW"������ž�����ʽ"HBWHT+HIW"�� ��������� ��"NOR+HIW"������������Ȼ���μ����������$n����.\n"NOR,user,enemy[j]);
	  message_vision(HIB"������ž�����ʽ"HBWHT+HIB"�� ��ˮ����ת ��"NOR+HIB"���ʵ���ɫ����������ӯ��ת����$nӯ��.\n"NOR,user,enemy[j]);
	  message_vision(HIY"������ž�����ʽ"HBYEL+HIY"�� �콫��ǧ�� ��"NOR+HIY"�������ĽȻ����������ת����$n����.\n"NOR,user,enemy[j]);
	  message_vision(HIG"������ž�����ʽ"HBGRN+HIG"�� �������� ��"NOR+HIG"�������������ͻȻ�������֣���$n�ͽ�.\n"NOR,user,enemy[j]);
	  message_vision(HIM"������ž�����ʽ"HBMAG+HIM"�� ��������� ��"NOR+HIM"��ص�������ü��㼤��������$n����.\n"NOR,user,enemy[j]);
	  message_vision(HIR"������ž��ڰ�ʽ"HBRED+HIR"�� ���ŭ��ԭ ��"NOR+HIR"����ŭ��������˷�Ϯ���������$n����.\n"NOR,user,enemy[j]);
	  message_vision(HIC"������ž��ھ�ʽ"HBBLU+HIC"�� ��������� ��"NOR+HIC"���ĺ�����������ƿռ�������$n����.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_damage("gin",(enemy[j]->query("max_gin")/100));
	  enemy[j]->receive_damage("sen",(enemy[j]->query("max_sen")/100));
	  enemy[j]->receive_damage("kee",(enemy[j]->query("max_kee")/100));
	  enemy[j]->start_busy(1);
	  COMBAT_D->report_status(enemy[j]);
	  break;
          }
	}
	}
	return ;
}

int query_autoload()
{
return 1;
}

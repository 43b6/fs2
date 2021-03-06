//edit by neverend
#include <armor.h>
#include <ansi.h>
inherit EQUIP;
object user;

void create()
{
 	        set_name(HBBLU+HIC"水瑟天光"NOR, ({ "water light cloak" ,"cloak" }) );
	        set_weight(50);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
                set("unit", "件");
		set("no_put",1);
		set("no_drop",1);
//		set("no_get",1);
		set("no_sell",1);
		set("no_auc",1);
		set("no_give",1);
		set("no_steal",1);
                set("value", 300000);
                set("material", "steal");
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
	object me,ob;
	me=this_player();
	ob=this_object();

	add_action("do_wear","wear");
	add_action("do_remove","remove");
	if( !ob->query("boss") )
	{
	ob->set("boss",me->query("id"));
	}
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
        message_vision(HBBLU+HIC"水色天光"NOR+HIW"在萧瑟的秋水下，让天际泛起了阵阵炫目的光彩，耀眼夺目.\n"NOR,user);
        set_heart_beat(1);
     } 
}
   
int do_remove(string str)
{
   if(str=="cloak" || str=="all" || str=="water light cloak")
     if( query("equipped") )
     {
        message_vision(HIW"耀眼炫目的光彩不再，"HBBLU+HIC"水色天光"NOR+HIW"渐渐稳没在萧瑟的秋水下.\n"NOR,user);
        set_heart_beat(0);
     }   
}                       

  
void heart_beat()
{
	object *enemy;
	int i,j,md,ud;
	i = (int)(user->query("combat_exp")/1000000);
	if( i > 10) i=10;
	if( i <  1)  i=1;
	enemy = user->query_enemy();
	j = random(sizeof(enemy));
	ud = random(user->query_skill("dodge"));


	if ( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	}

	if( user->is_fighting() && query("equipped") && ((ud+1) > random(150)+50) )
	{
	if( environment(user) == environment(enemy[j]) )
	{
	message_vision(sprintf(HIW"突然由"HBBLU+HIC"水瑟天光"NOR+HIW"中传出一阵惊天狂啸，$N犹如绝代战神附身，将战意发挥到极限使出战神绝技\n"NOR),user,enemy[j]);
	message_vision(sprintf(HIM"－＝≡ "HBBLU+HIC"惊 － 天 － 动 － 地 － 式"NOR+HIY" ～◎～ "HBBLU+HIC"狂 － 灭 － 天 － 九 － 绝"NOR+HIM" ≡＝－\n\n"NOR),user,enemy[j]);

	  switch(random(i))
	  {
	  case 0:
	  message_vision(HIR"狂灭天九绝第一式"HBRED+HIY"【 天翔奔雷破 】"NOR+HIR"由天降下的无数雷球电气四射，向$n狂袭.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/300));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/300));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/300));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 1:
	  message_vision(HIC"狂灭天九绝第二式"HBCYN+HIC"【 天风卷千钧 】"NOR+HIC"庞然巨大的龙卷飓风狂吹乱扫，向$n袭击.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/280));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/280));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/280));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 2:
	  message_vision(HIW"狂灭天九绝第三式"HBWHT+HIW"【 天龙舞飞旋 】"NOR+HIW"无数的龙气聚然成形激射狂旋，向$n飞舞.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/260));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/260));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/260));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 3:
	  message_vision(HIB"狂灭天九绝第四式"HBWHT+HIB"【 天水月流转 】"NOR+HIB"朦胧的月色若隐若现轻盈流转，向$n盈绕.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/240));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/240));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/240));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 4:
	  message_vision(HIY"狂灭天九绝第五式"HBYEL+HIY"【 天将伏千军 】"NOR+HIY"威武的神将慕然出现身旋四转，向$n急攻.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/220));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/220));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/220));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 5:
	  message_vision(HIG"狂灭天九绝第六式"HBGRN+HIG"【 天风驰阴雷 】"NOR+HIG"低鸣阴沉的天际突然风雷骤现，向$n猛降.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/200));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/200));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/200));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 6:
	  message_vision(HIM"狂灭天九绝第七式"HBMAG+HIM"【 天灵箭幻舞 】"NOR+HIM"大地的灵气如幻箭般激射四起，向$n狂射.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/180));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/180));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/180));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 7:
	  message_vision(HIR"狂灭天九绝第八式"HBRED+HIR"【 天火怒燎原 】"NOR+HIR"天神怒火由四面八方袭卷而至，向$n焚烧.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/160));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/160));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/160));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 8:
	  message_vision(HIC"狂灭天九绝第九式"HBBLU+HIC"【 天冰寒星雨 】"NOR+HIC"万点的寒星如骤雨般破空急降，向$n暴降.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/140));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/140));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/140));
	  COMBAT_D->report_status(enemy[j]);
	  break;

	  case 9:
	  message_vision(HIR"狂灭天九绝第一式"HBRED+HIY"【 天翔奔雷破 】"NOR+HIR"由天降下的无数雷球电气四射，向$n狂袭.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIC"狂灭天九绝第二式"HBCYN+HIC"【 天风卷千钧 】"NOR+HIC"庞然巨大的龙卷飓风狂吹乱扫，向$n袭击.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIW"狂灭天九绝第三式"HBWHT+HIW"【 天龙舞飞旋 】"NOR+HIW"无数的龙气聚然成形激射狂旋，向$n飞舞.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIB"狂灭天九绝第四式"HBWHT+HIB"【 天水月流转 】"NOR+HIB"朦胧的月色若隐若现轻盈流转，向$n盈绕.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIY"狂灭天九绝第五式"HBYEL+HIY"【 天将伏千军 】"NOR+HIY"威武的神将慕然出现身旋四转，向$n急攻.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIG"狂灭天九绝第六式"HBGRN+HIG"【 天风驰阴雷 】"NOR+HIG"低鸣阴沉的天际突然风雷骤现，向$n猛降.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIM"狂灭天九绝第七式"HBMAG+HIM"【 天灵箭幻舞 】"NOR+HIM"大地的灵气如幻箭般激射四起，向$n狂射.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIR"狂灭天九绝第八式"HBRED+HIR"【 天火怒燎原 】"NOR+HIR"天神怒火由四面八方袭卷而至，向$n焚烧.\n"NOR,user,enemy[j]);
	  COMBAT_D->report_status(enemy[j]);
	  message_vision(HIC"狂灭天九绝第九式"HBBLU+HIC"【 天冰寒星雨 】"NOR+HIC"万点的寒星如骤雨般破空急降，向$n暴降.\n"NOR,user,enemy[j]);
	  enemy[j]->receive_wound("gin",(enemy[j]->query("max_gin")/100));
	  enemy[j]->receive_wound("sen",(enemy[j]->query("max_sen")/100));
	  enemy[j]->receive_wound("kee",(enemy[j]->query("max_kee")/100));
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

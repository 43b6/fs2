#include <weapon.h>
  inherit SWORD;
void create()
{
 set_name("剑",({ "snake sword","sword"}));
      set_weight(100);                                       
	if( clonep() )
		set_default_object(__FILE__);
	else {
		 set("unit","把");
      set("long", "
这把剑是由古代名铸造师陈洛铸成的，柄上雕着一只栩栩如生的狼，狼的
眼睛正冷冷的看着你，剑身则略作龙形，仿佛要将你活生生的撕裂，据说
这把剑威力无穷，只有最精通剑法的人才敢使用它．\n") ;
		 set("value", 400);
		 set("material","crimsonsteel");
set("wield_msg","\n
$N把龙狼剑握在手中，突然剑柄上的狼发出一阵凄厉的狼嚎，一股黑气冲出，
化做狼形围绕在$N的身旁，剑上蛰伏以久的龙魂在$N强烈的斗气趋动下一飞
冲天，两只神兽竞相呼号，发挥这把剑里蕴涵的无比力量. \n");
									

	    set("unwield_msg","
$N把龙狼剑放下，龙神和狼神又化为两股黑气，潜回剑内
，静待下一次的战斗\n");
  init_sword(5000);
	setup();
  }
}

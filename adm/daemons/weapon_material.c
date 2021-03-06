//设计 by Neverend 2001/09/28
//判断武器的材质和锋利度
#include <combat.h> 
#include <ansi.h>

void weapon_material(object me,object target)
{
	string wo,oo,wn,on;
	int wm,om,ws,os,wd,od,qq;

	object ob=target->query_temp("weapon");
	object weapon=me->query_temp("weapon");

	if( !weapon || !ob )
	return;
//如果未给定材质和锋利度，由以下来给定所以都未给定的
//状态下，武器的初始值给定在300 的值，若能够拿最好的
//武器，是可以直接砍断对方的武器。

	if( !weapon->query("material") )
	weapon->set("material","iron");
	if( !ob->query("material") )
	ob->set("material","iron");
	if( !weapon->query("sharp") )
	weapon->set("sharp",6);
	if( !ob->query("sharp") )
	ob->set("sharp",6);
//以下取得原来的名称
	if( !weapon->query("bname") )
	{
	wn = weapon->query("name");
	weapon->set("bname",wn);
	}
	if( !ob->query("bname") )
	{
	on = ob->query("name");
	ob->set("bname",on);
	}
//以下是武器的材质    
	wo = weapon->query("material");
	oo = ob->query("material");
//以下是武器的锋利度
	ws = weapon->query("sharp");
	os = ob->query("sharp");

	switch(wo)
	{
	case "crimsonsteel": wm=100;  break;
	case "blacksteel":   wm=90;   break;
	case "gem":          wm=80;   break;
	case "gold":         wm=70;   break;
	case "silver":       wm=60;   break;
	case "steel":        wm=50;   break;
	case "copper":       wm=40;   break;
	case "iron":         wm=30;   break;
	case "wood":         wm=25;   break;
	case "bone":         wm=20;   break;
	case "leather":      wm=15;   break;
	case "fur":          wm=10;   break;
	case "cloth":        wm=5;    break;
	default:             wm=1;    break;
	}

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
//武器的等级用(材质)*(锋利度)来定义
	wd = wm * ws;
	if( wd > 1000 ) wd=1000;
	od = om * os;
	if( od > 1000 ) od=1000;
	qq = random( wd-od );

//强制设定只要差距大于850，就直接砍断对方的武器，机率设在1/2左右
	if( random(10) > 5 && (wd - od > 850) )
	{
	message_vision(HIC"$N的"NOR+weapon->name()+HIC"「唰”地一声，把$n"HIC"的"NOR+ob->name()+HIC"削成两段!!\n"NOR,me,target);
	ob->unequip();
	ob->move(environment(target));
	ob->set("name", "(断毁两段)" + ob->query("name"));
	ob->set("value", 1);
	ob->set("weapon_prop/damage",0);
	target->reset_action();
	}else{
//在这个范围内，因为武器等级差距甚大，所以会有较大的机会伤害对方武器
//差距愈大，对方武器愈有机会受损 (0.67 - 0.3 )之间
	  if( qq > 280 && (wd-od < 850 && wd-od > 400) )
	  {
	  ob->unequip();
	  message_vision(HIR"$N的"NOR+weapon->name()+HIR"把$n"HIR"的"NOR+ob->name()+HIR"重重的砍出了一个严重的缺口!!\n"NOR,me,target);
//	  message_vision("$N"+wd+"，$n"+od+"。\n",me,target);
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
	    if( ob->query("weapon_prop/damage") > 10 || ob->query("bad") < 12 )
	    {
	    ob->add("weapon_prop/damage",-10);
	    ob->wield();
	    }else{
	      message_vision(RED"$n"RED"的"+ob->name()+RED"再也承受不住攻击完全断毁了!!\n"NOR,me,target);
	    ob->move(environment(target));
	    ob->set("name", "(完全断毁)" + ob->query("bname"));
	    ob->set("value", 1);
	    ob->set("weapon_prop/damage",0);
	    target->reset_action();
	    }
	  }else{
//武器等级差距较小，但仍然能伤害对方的武器
//差距愈大，对方武器愈有机会受损 (0.625 - 0.25)之间
	    if( qq > 150 && (wd-od < 400 && wd-od > 200) )
	    {
	    ob->unequip();
	    message_vision(HIY"$N"HIY"的"NOR+weapon->name()+HIY"把$n"HIY"的"NOR+ob->name()+HIY"轻轻的砍出了一个小缺口!!\n"NOR,me,target);
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
	      if( ob->query("weapon_prop/damage") > 5 || ob->query("bad") < 12 )
	      {
	      ob->add("weapon_prop/damage",-5);
	      ob->wield();
	      }else{
	      message_vision(RED"$n"RED"的"+ob->name()+RED"再也承受不住攻击碎裂断毁了!!\n"NOR,me,target);
	      ob->move(environment(target));
	      ob->set("name", "(碎裂断毁)" + ob->query("bname"));
	      ob->set("value", 1);
	      ob->set("weapon_prop/damage",0);
	      target->reset_action();
	      }
	    }else{
//以下武器等级相当，所以不再以伤害对方武器
	      if( qq > 75 && (wd-od < 200 && wd-od > 100) )
	      {
	      message_vision(HIG"$n"HIG"只觉得手中"NOR+ob->name()+HIG"被"NOR+weapon->name()+HIG"一震，险些脱手飞出!!\n"NOR,me,target);
		  }else{
		    if( qq > 25 && (wd-od < 100 && wd-od > 50) )
		    {
	        message_vision(HIW"$N"HIW"的"NOR+weapon->name()+HIW"和$n"HIW"的"NOR+ob->name()+HIW"相击，冒出点点的火星。\n"NOR,me,target);
	        }else{
	          if( random(10) > 5 && (wd == od) )
	          {
	          message_vision(HIM"$N"HIM"的"NOR+weapon->name()+HIM"和$n"HIM"的"NOR+ob->name()+HIM"相击，发出响亮清脆的声音。\n"NOR,me,target);
	          }
	        }
	      }
	    }
	  }
	}
}

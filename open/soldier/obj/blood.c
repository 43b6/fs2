
#include <weapon.h>
#include <ansi.h>

inherit LANCE;
  void create()
  {
        seteuid(getuid());
        set_name( HIR"‘血燕’"NOR ,({"blood swallow","blood","swallow"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
   set("long","
    这把利器是一双的,自古到今它的身世仍然是一个谜,它混身
充满了血腥味,现在武林没人知道它是谁所制造的。。。
   ");
                set("value",100000);
                set("material", "crimsonsteel");
        set("wield_msg", "$N从背后抽出$n,忽然觉的"HIR"杀意四起,$N充满了暴戾之气。\n"NOR);
        set("unwield_msg", "$N理性的把$n小心的收回到背后。\n");
      }
        init_lance(100);
        setup();
}


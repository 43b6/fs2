
#include <weapon.h>
#include <ansi.h>

inherit LANCE;
  void create()
  {
        seteuid(getuid());
        set_name( HIR"��Ѫ�࡯"NOR ,({"blood swallow","blood","swallow"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
   set("long","
    ���������һ˫��,�Թŵ�������������Ȼ��һ����,������
������Ѫ��ζ,��������û��֪������˭������ġ�����
   ");
                set("value",100000);
                set("material", "crimsonsteel");
        set("wield_msg", "$N�ӱ�����$n,��Ȼ����"HIR"ɱ������,$N�����˱���֮����\n"NOR);
        set("unwield_msg", "$N���Եİ�$nС�ĵ��ջص�����\n");
      }
        init_lance(100);
        setup();
}


#include <weapon.h>
#include <combat.h>
inherit BLADE;
void create()
{
        set_name("��������������ꡯ",({"bad-evil-mblade","blade"}));
        set_weight(300);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit","��");
set("long","\n�����ꡯ������͸���������������͸��������������ɫ�ĹǼ�������
�������䴦��ͻ����С���У�����ɱ������Ī����С�\n");
          set("value", 100);
          set("material","blacksteel");
        }
        init_blade(1);
        setup();
}
int query_autoload()
{
if( this_player()->query("evil-mblade")==1 )
return 1;
}

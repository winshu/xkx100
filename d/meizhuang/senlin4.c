// /d/meizhuang/senlin4.c
// Last Modified by winder on Apr. 10 2000
inherit ROOM;

void create()
{
	set("short", "��ľ԰");
	set("long", @LONG
������÷ׯ�İ�ľ԰����һ�ߵ���������ߵ���һ�������޾���
Сɭ��һ��������������������������������кܶ�в��������ֵ�
������ľ�����������У�ֻ�����Ƭ���־��������һ�飬������ȥ��
�á� 
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
		"west" : __DIR__"senlin5",
		"north" : __DIR__"senlin3",
		"south" : __DIR__"senlin4",
		"east" : __DIR__"senlin2",
	]));
	set("objects", ([ /* sizeof() == 1 */
		__DIR__"npc/jiading" : 1,
	]));
	set("outdoors", "meizhuang");

	set("coor/x", 3510);
	set("coor/y", -1420);
	set("coor/z", 10);
	setup();
	replace_program(ROOM);
}
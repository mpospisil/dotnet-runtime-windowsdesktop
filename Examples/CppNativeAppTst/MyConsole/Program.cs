// See https://aka.ms/new-console-template for more information
using Microsoft.VisualBasic;

Console.WriteLine("Hello, World!");

var service = new ClrClassLibrary.MyService();
var res = service.Add(2, 3);
Console.WriteLine($"Result is {res}");

<template>
  <main class="container mx-auto">
    <div class="grid grid-cols-5 space-x-5 py-12">
      <div v-for="(day, index) in days" :key="index" class="shadow-xl bg-white">
        <div class="text-lg font-bold p-2 border-b">{{ day }}</div>
        <div class="space-y-2">
          <div v-for="(timeSlot, index) in timeSlots" :key="index" class="p-2">
            <div class="text-sm">{{ timeSlot }}</div>
          </div>
        </div>
      </div>
    </div>
  </main>
</template>

<script setup>
import { ref } from "vue";

const days = ref(["Pondělí", "Úterý", "Středa", "Čtvrtek", "Pátek"]);

const timeSlots = ref(["8:00", "9:00", "10:00", "11:00"]);
</script>
